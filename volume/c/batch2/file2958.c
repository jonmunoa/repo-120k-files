// fichero 2958 -- macros y constantes
#define LIMITE_2958 3058
#define FACTOR_2958 4

int aplicar_limite2958(int valor) {
    if (valor > LIMITE_2958) return LIMITE_2958;
    return valor * FACTOR_2958;
}
