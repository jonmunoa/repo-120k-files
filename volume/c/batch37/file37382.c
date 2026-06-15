// fichero 37382 -- macros y constantes -- MODIFICADO
#define LIMITE_37382 37582
#define FACTOR_37382 4

int aplicar_limite37382(int valor) {
    if (valor > LIMITE_37382) return LIMITE_37382;
    return valor * FACTOR_37382;
}
