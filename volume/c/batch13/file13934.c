// fichero 13934 -- macros y constantes
#define LIMITE_13934 14034
#define FACTOR_13934 5

int aplicar_limite13934(int valor) {
    if (valor > LIMITE_13934) return LIMITE_13934;
    return valor * FACTOR_13934;
}
