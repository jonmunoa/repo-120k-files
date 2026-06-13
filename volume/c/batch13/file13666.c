// fichero 13666 -- macros y constantes
#define LIMITE_13666 13766
#define FACTOR_13666 2

int aplicar_limite13666(int valor) {
    if (valor > LIMITE_13666) return LIMITE_13666;
    return valor * FACTOR_13666;
}
