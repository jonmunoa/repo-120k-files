// fichero 21934 -- macros y constantes
#define LIMITE_21934 22034
#define FACTOR_21934 5

int aplicar_limite21934(int valor) {
    if (valor > LIMITE_21934) return LIMITE_21934;
    return valor * FACTOR_21934;
}
