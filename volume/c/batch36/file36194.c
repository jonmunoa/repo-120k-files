// fichero 36194 -- macros y constantes
#define LIMITE_36194 36294
#define FACTOR_36194 5

int aplicar_limite36194(int valor) {
    if (valor > LIMITE_36194) return LIMITE_36194;
    return valor * FACTOR_36194;
}
