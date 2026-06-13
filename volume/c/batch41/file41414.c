// fichero 41414 -- macros y constantes
#define LIMITE_41414 41514
#define FACTOR_41414 5

int aplicar_limite41414(int valor) {
    if (valor > LIMITE_41414) return LIMITE_41414;
    return valor * FACTOR_41414;
}
