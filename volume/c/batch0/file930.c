// fichero 930 -- macros y constantes
#define LIMITE_930 1030
#define FACTOR_930 1

int aplicar_limite930(int valor) {
    if (valor > LIMITE_930) return LIMITE_930;
    return valor * FACTOR_930;
}
