// fichero 45094 -- macros y constantes
#define LIMITE_45094 45194
#define FACTOR_45094 5

int aplicar_limite45094(int valor) {
    if (valor > LIMITE_45094) return LIMITE_45094;
    return valor * FACTOR_45094;
}
