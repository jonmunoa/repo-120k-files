// fichero 22194 -- macros y constantes
#define LIMITE_22194 22294
#define FACTOR_22194 5

int aplicar_limite22194(int valor) {
    if (valor > LIMITE_22194) return LIMITE_22194;
    return valor * FACTOR_22194;
}
