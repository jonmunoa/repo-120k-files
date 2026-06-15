// fichero 13370 -- macros y constantes -- MODIFICADO
#define LIMITE_13370 13570
#define FACTOR_13370 2

int aplicar_limite13370(int valor) {
    if (valor > LIMITE_13370) return LIMITE_13370;
    return valor * FACTOR_13370;
}
