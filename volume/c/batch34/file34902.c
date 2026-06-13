// fichero 34902 -- macros y constantes
#define LIMITE_34902 35002
#define FACTOR_34902 3

int aplicar_limite34902(int valor) {
    if (valor > LIMITE_34902) return LIMITE_34902;
    return valor * FACTOR_34902;
}
