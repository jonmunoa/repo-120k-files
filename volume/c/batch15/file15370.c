// fichero 15370 -- macros y constantes -- MODIFICADO
#define LIMITE_15370 15570
#define FACTOR_15370 2

int aplicar_limite15370(int valor) {
    if (valor > LIMITE_15370) return LIMITE_15370;
    return valor * FACTOR_15370;
}
