// fichero 41434 -- macros y constantes -- MODIFICADO
#define LIMITE_41434 41634
#define FACTOR_41434 6

int aplicar_limite41434(int valor) {
    if (valor > LIMITE_41434) return LIMITE_41434;
    return valor * FACTOR_41434;
}
