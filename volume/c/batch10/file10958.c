// fichero 10958 -- macros y constantes
#define LIMITE_10958 11058
#define FACTOR_10958 4

int aplicar_limite10958(int valor) {
    if (valor > LIMITE_10958) return LIMITE_10958;
    return valor * FACTOR_10958;
}
