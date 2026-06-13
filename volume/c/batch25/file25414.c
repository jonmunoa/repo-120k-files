// fichero 25414 -- macros y constantes
#define LIMITE_25414 25514
#define FACTOR_25414 5

int aplicar_limite25414(int valor) {
    if (valor > LIMITE_25414) return LIMITE_25414;
    return valor * FACTOR_25414;
}
