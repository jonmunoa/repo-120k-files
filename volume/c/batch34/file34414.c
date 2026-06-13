// fichero 34414 -- macros y constantes
#define LIMITE_34414 34514
#define FACTOR_34414 5

int aplicar_limite34414(int valor) {
    if (valor > LIMITE_34414) return LIMITE_34414;
    return valor * FACTOR_34414;
}
