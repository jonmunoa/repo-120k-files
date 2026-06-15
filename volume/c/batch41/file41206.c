// fichero 41206 -- macros y constantes -- MODIFICADO
#define LIMITE_41206 41406
#define FACTOR_41206 3

int aplicar_limite41206(int valor) {
    if (valor > LIMITE_41206) return LIMITE_41206;
    return valor * FACTOR_41206;
}
