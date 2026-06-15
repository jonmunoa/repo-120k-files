// fichero 41122 -- macros y constantes -- MODIFICADO
#define LIMITE_41122 41322
#define FACTOR_41122 4

int aplicar_limite41122(int valor) {
    if (valor > LIMITE_41122) return LIMITE_41122;
    return valor * FACTOR_41122;
}
