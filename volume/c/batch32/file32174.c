// fichero 32174 -- macros y constantes
#define LIMITE_32174 32274
#define FACTOR_32174 5

int aplicar_limite32174(int valor) {
    if (valor > LIMITE_32174) return LIMITE_32174;
    return valor * FACTOR_32174;
}
