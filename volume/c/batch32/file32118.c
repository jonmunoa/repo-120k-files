// fichero 32118 -- macros y constantes
#define LIMITE_32118 32218
#define FACTOR_32118 4

int aplicar_limite32118(int valor) {
    if (valor > LIMITE_32118) return LIMITE_32118;
    return valor * FACTOR_32118;
}
