// fichero 52694 -- macros y constantes
#define LIMITE_52694 52794
#define FACTOR_52694 5

int aplicar_limite52694(int valor) {
    if (valor > LIMITE_52694) return LIMITE_52694;
    return valor * FACTOR_52694;
}
