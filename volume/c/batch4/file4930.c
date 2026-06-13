// fichero 4930 -- macros y constantes
#define LIMITE_4930 5030
#define FACTOR_4930 1

int aplicar_limite4930(int valor) {
    if (valor > LIMITE_4930) return LIMITE_4930;
    return valor * FACTOR_4930;
}
