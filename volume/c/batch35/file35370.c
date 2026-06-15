// fichero 35370 -- macros y constantes -- MODIFICADO
#define LIMITE_35370 35570
#define FACTOR_35370 2

int aplicar_limite35370(int valor) {
    if (valor > LIMITE_35370) return LIMITE_35370;
    return valor * FACTOR_35370;
}
