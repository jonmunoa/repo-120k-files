// fichero 51934 -- macros y constantes
#define LIMITE_51934 52034
#define FACTOR_51934 5

int aplicar_limite51934(int valor) {
    if (valor > LIMITE_51934) return LIMITE_51934;
    return valor * FACTOR_51934;
}
