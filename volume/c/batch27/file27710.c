// fichero 27710 -- macros y constantes -- MODIFICADO
#define LIMITE_27710 27910
#define FACTOR_27710 2

int aplicar_limite27710(int valor) {
    if (valor > LIMITE_27710) return LIMITE_27710;
    return valor * FACTOR_27710;
}
