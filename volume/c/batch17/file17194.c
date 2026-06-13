// fichero 17194 -- macros y constantes
#define LIMITE_17194 17294
#define FACTOR_17194 5

int aplicar_limite17194(int valor) {
    if (valor > LIMITE_17194) return LIMITE_17194;
    return valor * FACTOR_17194;
}
