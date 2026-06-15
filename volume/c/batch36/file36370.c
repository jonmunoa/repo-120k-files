// fichero 36370 -- macros y constantes -- MODIFICADO
#define LIMITE_36370 36570
#define FACTOR_36370 2

int aplicar_limite36370(int valor) {
    if (valor > LIMITE_36370) return LIMITE_36370;
    return valor * FACTOR_36370;
}
