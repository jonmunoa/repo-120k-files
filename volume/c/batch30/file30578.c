// fichero 30578 -- macros y constantes
#define LIMITE_30578 30678
#define FACTOR_30578 4

int aplicar_limite30578(int valor) {
    if (valor > LIMITE_30578) return LIMITE_30578;
    return valor * FACTOR_30578;
}
