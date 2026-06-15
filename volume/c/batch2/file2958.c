// fichero 2958 -- macros y constantes -- MODIFICADO
#define LIMITE_2958 3158
#define FACTOR_2958 5

int aplicar_limite2958(int valor) {
    if (valor > LIMITE_2958) return LIMITE_2958;
    return valor * FACTOR_2958;
}
