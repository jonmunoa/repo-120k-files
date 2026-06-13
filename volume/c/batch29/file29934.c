// fichero 29934 -- macros y constantes
#define LIMITE_29934 30034
#define FACTOR_29934 5

int aplicar_limite29934(int valor) {
    if (valor > LIMITE_29934) return LIMITE_29934;
    return valor * FACTOR_29934;
}
