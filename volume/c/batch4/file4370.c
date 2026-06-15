// fichero 4370 -- macros y constantes -- MODIFICADO
#define LIMITE_4370 4570
#define FACTOR_4370 2

int aplicar_limite4370(int valor) {
    if (valor > LIMITE_4370) return LIMITE_4370;
    return valor * FACTOR_4370;
}
