// fichero 36034 -- macros y constantes -- MODIFICADO
#define LIMITE_36034 36234
#define FACTOR_36034 6

int aplicar_limite36034(int valor) {
    if (valor > LIMITE_36034) return LIMITE_36034;
    return valor * FACTOR_36034;
}
