// fichero 22094 -- macros y constantes
#define LIMITE_22094 22194
#define FACTOR_22094 5

int aplicar_limite22094(int valor) {
    if (valor > LIMITE_22094) return LIMITE_22094;
    return valor * FACTOR_22094;
}
