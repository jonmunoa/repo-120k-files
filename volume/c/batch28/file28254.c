// fichero 28254 -- macros y constantes -- MODIFICADO
#define LIMITE_28254 28454
#define FACTOR_28254 6

int aplicar_limite28254(int valor) {
    if (valor > LIMITE_28254) return LIMITE_28254;
    return valor * FACTOR_28254;
}
