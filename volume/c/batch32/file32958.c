// fichero 32958 -- macros y constantes
#define LIMITE_32958 33058
#define FACTOR_32958 4

int aplicar_limite32958(int valor) {
    if (valor > LIMITE_32958) return LIMITE_32958;
    return valor * FACTOR_32958;
}
