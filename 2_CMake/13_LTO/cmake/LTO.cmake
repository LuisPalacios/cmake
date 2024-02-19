#
# Fichero cmake de apoyo
#

# Objetivo: Activar la optimización en tiempo de link
#  LTO - Link Time Optimization
#  IPO - InterProcedural Optimization
#

function(habilitar_LTO_para_el_Target TARGET ENABLE)
    if(NOT ${ENABLE})
        return()
    endif()

    #  InterProcedural Optimization
    include(CheckIPOSupported)
    check_ipo_supported(RESULT result OUTPUT output)

    if(result)
        message(STATUS "IPO/LTO is supported!")
        set_property(TARGET ${TARGET} PROPERTY INTERPROCEDURAL_OPTIMIZATION ${ENABLE})
    else()
        message(WARNING "IPO/LTO is not supported!")
    endif()
endfunction(habilitar_LTO_para_el_Target)
