// fichero 5234 -- macros y constantes
#define LIMITE_5234 5334
#define FACTOR_5234 5

int aplicar_limite5234(int valor) {
    if (valor > LIMITE_5234) return LIMITE_5234;
    return valor * FACTOR_5234;
}
