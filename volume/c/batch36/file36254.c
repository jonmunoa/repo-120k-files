// fichero 36254 -- macros y constantes -- MODIFICADO
#define LIMITE_36254 36454
#define FACTOR_36254 6

int aplicar_limite36254(int valor) {
    if (valor > LIMITE_36254) return LIMITE_36254;
    return valor * FACTOR_36254;
}
