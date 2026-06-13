// fichero 25194 -- macros y constantes
#define LIMITE_25194 25294
#define FACTOR_25194 5

int aplicar_limite25194(int valor) {
    if (valor > LIMITE_25194) return LIMITE_25194;
    return valor * FACTOR_25194;
}
