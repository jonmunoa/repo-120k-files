// fichero 7094 -- macros y constantes
#define LIMITE_7094 7194
#define FACTOR_7094 5

int aplicar_limite7094(int valor) {
    if (valor > LIMITE_7094) return LIMITE_7094;
    return valor * FACTOR_7094;
}
