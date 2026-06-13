// fichero 54930 -- macros y constantes
#define LIMITE_54930 55030
#define FACTOR_54930 1

int aplicar_limite54930(int valor) {
    if (valor > LIMITE_54930) return LIMITE_54930;
    return valor * FACTOR_54930;
}
