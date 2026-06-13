// fichero 12194 -- macros y constantes
#define LIMITE_12194 12294
#define FACTOR_12194 5

int aplicar_limite12194(int valor) {
    if (valor > LIMITE_12194) return LIMITE_12194;
    return valor * FACTOR_12194;
}
