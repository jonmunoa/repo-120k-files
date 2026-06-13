// fichero 14598 -- macros y constantes
#define LIMITE_14598 14698
#define FACTOR_14598 4

int aplicar_limite14598(int valor) {
    if (valor > LIMITE_14598) return LIMITE_14598;
    return valor * FACTOR_14598;
}
