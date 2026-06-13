// fichero 17414 -- macros y constantes
#define LIMITE_17414 17514
#define FACTOR_17414 5

int aplicar_limite17414(int valor) {
    if (valor > LIMITE_17414) return LIMITE_17414;
    return valor * FACTOR_17414;
}
