// fichero 52118 -- macros y constantes
#define LIMITE_52118 52218
#define FACTOR_52118 4

int aplicar_limite52118(int valor) {
    if (valor > LIMITE_52118) return LIMITE_52118;
    return valor * FACTOR_52118;
}
