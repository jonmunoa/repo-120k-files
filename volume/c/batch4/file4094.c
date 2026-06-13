// fichero 4094 -- macros y constantes
#define LIMITE_4094 4194
#define FACTOR_4094 5

int aplicar_limite4094(int valor) {
    if (valor > LIMITE_4094) return LIMITE_4094;
    return valor * FACTOR_4094;
}
