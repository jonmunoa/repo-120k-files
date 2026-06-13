// fichero 21862 -- macros y constantes
#define LIMITE_21862 21962
#define FACTOR_21862 3

int aplicar_limite21862(int valor) {
    if (valor > LIMITE_21862) return LIMITE_21862;
    return valor * FACTOR_21862;
}
