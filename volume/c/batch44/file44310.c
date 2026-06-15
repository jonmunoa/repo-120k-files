// fichero 44310 -- macros y constantes -- MODIFICADO
#define LIMITE_44310 44510
#define FACTOR_44310 2

int aplicar_limite44310(int valor) {
    if (valor > LIMITE_44310) return LIMITE_44310;
    return valor * FACTOR_44310;
}
