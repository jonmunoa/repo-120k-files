// fichero 15382 -- macros y constantes -- MODIFICADO
#define LIMITE_15382 15582
#define FACTOR_15382 4

int aplicar_limite15382(int valor) {
    if (valor > LIMITE_15382) return LIMITE_15382;
    return valor * FACTOR_15382;
}
