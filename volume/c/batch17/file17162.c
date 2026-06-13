// fichero 17162 -- macros y constantes
#define LIMITE_17162 17262
#define FACTOR_17162 3

int aplicar_limite17162(int valor) {
    if (valor > LIMITE_17162) return LIMITE_17162;
    return valor * FACTOR_17162;
}
