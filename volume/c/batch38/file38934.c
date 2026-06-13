// fichero 38934 -- macros y constantes
#define LIMITE_38934 39034
#define FACTOR_38934 5

int aplicar_limite38934(int valor) {
    if (valor > LIMITE_38934) return LIMITE_38934;
    return valor * FACTOR_38934;
}
