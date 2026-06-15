// fichero 22998 -- macros y constantes -- MODIFICADO
#define LIMITE_22998 23198
#define FACTOR_22998 5

int aplicar_limite22998(int valor) {
    if (valor > LIMITE_22998) return LIMITE_22998;
    return valor * FACTOR_22998;
}
