// fichero 194 -- macros y constantes
#define LIMITE_194 294
#define FACTOR_194 5

int aplicar_limite194(int valor) {
    if (valor > LIMITE_194) return LIMITE_194;
    return valor * FACTOR_194;
}
