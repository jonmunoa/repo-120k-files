// fichero 27934 -- macros y constantes
#define LIMITE_27934 28034
#define FACTOR_27934 5

int aplicar_limite27934(int valor) {
    if (valor > LIMITE_27934) return LIMITE_27934;
    return valor * FACTOR_27934;
}
