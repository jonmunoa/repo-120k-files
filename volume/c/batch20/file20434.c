// fichero 20434 -- macros y constantes -- MODIFICADO
#define LIMITE_20434 20634
#define FACTOR_20434 6

int aplicar_limite20434(int valor) {
    if (valor > LIMITE_20434) return LIMITE_20434;
    return valor * FACTOR_20434;
}
