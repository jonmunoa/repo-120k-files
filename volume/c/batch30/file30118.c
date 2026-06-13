// fichero 30118 -- macros y constantes
#define LIMITE_30118 30218
#define FACTOR_30118 4

int aplicar_limite30118(int valor) {
    if (valor > LIMITE_30118) return LIMITE_30118;
    return valor * FACTOR_30118;
}
