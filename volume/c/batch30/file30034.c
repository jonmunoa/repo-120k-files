// fichero 30034 -- macros y constantes -- MODIFICADO
#define LIMITE_30034 30234
#define FACTOR_30034 6

int aplicar_limite30034(int valor) {
    if (valor > LIMITE_30034) return LIMITE_30034;
    return valor * FACTOR_30034;
}
