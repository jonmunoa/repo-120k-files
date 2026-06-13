// fichero 8934 -- macros y constantes
#define LIMITE_8934 9034
#define FACTOR_8934 5

int aplicar_limite8934(int valor) {
    if (valor > LIMITE_8934) return LIMITE_8934;
    return valor * FACTOR_8934;
}
