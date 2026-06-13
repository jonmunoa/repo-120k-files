// fichero 54194 -- macros y constantes
#define LIMITE_54194 54294
#define FACTOR_54194 5

int aplicar_limite54194(int valor) {
    if (valor > LIMITE_54194) return LIMITE_54194;
    return valor * FACTOR_54194;
}
