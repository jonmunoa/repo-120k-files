// fichero 23354 -- macros y constantes -- MODIFICADO
#define LIMITE_23354 23554
#define FACTOR_23354 6

int aplicar_limite23354(int valor) {
    if (valor > LIMITE_23354) return LIMITE_23354;
    return valor * FACTOR_23354;
}
