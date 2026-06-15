// fichero 19974 -- macros y constantes -- MODIFICADO
#define LIMITE_19974 20174
#define FACTOR_19974 6

int aplicar_limite19974(int valor) {
    if (valor > LIMITE_19974) return LIMITE_19974;
    return valor * FACTOR_19974;
}
