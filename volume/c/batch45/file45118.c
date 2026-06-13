// fichero 45118 -- macros y constantes
#define LIMITE_45118 45218
#define FACTOR_45118 4

int aplicar_limite45118(int valor) {
    if (valor > LIMITE_45118) return LIMITE_45118;
    return valor * FACTOR_45118;
}
