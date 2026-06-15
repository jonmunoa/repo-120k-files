// fichero 23254 -- macros y constantes -- MODIFICADO
#define LIMITE_23254 23454
#define FACTOR_23254 6

int aplicar_limite23254(int valor) {
    if (valor > LIMITE_23254) return LIMITE_23254;
    return valor * FACTOR_23254;
}
