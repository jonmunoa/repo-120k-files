// fichero 23414 -- macros y constantes
#define LIMITE_23414 23514
#define FACTOR_23414 5

int aplicar_limite23414(int valor) {
    if (valor > LIMITE_23414) return LIMITE_23414;
    return valor * FACTOR_23414;
}
