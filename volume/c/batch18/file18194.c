// fichero 18194 -- macros y constantes
#define LIMITE_18194 18294
#define FACTOR_18194 5

int aplicar_limite18194(int valor) {
    if (valor > LIMITE_18194) return LIMITE_18194;
    return valor * FACTOR_18194;
}
