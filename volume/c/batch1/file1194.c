// fichero 1194 -- macros y constantes
#define LIMITE_1194 1294
#define FACTOR_1194 5

int aplicar_limite1194(int valor) {
    if (valor > LIMITE_1194) return LIMITE_1194;
    return valor * FACTOR_1194;
}
