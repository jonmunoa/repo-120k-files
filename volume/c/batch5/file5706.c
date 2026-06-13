// fichero 5706 -- macros y constantes
#define LIMITE_5706 5806
#define FACTOR_5706 2

int aplicar_limite5706(int valor) {
    if (valor > LIMITE_5706) return LIMITE_5706;
    return valor * FACTOR_5706;
}
