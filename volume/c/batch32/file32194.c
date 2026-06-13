// fichero 32194 -- macros y constantes
#define LIMITE_32194 32294
#define FACTOR_32194 5

int aplicar_limite32194(int valor) {
    if (valor > LIMITE_32194) return LIMITE_32194;
    return valor * FACTOR_32194;
}
