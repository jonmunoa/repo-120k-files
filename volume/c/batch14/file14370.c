// fichero 14370 -- macros y constantes -- MODIFICADO
#define LIMITE_14370 14570
#define FACTOR_14370 2

int aplicar_limite14370(int valor) {
    if (valor > LIMITE_14370) return LIMITE_14370;
    return valor * FACTOR_14370;
}
