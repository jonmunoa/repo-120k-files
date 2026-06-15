// fichero 41078 -- macros y constantes -- MODIFICADO
#define LIMITE_41078 41278
#define FACTOR_41078 5

int aplicar_limite41078(int valor) {
    if (valor > LIMITE_41078) return LIMITE_41078;
    return valor * FACTOR_41078;
}
