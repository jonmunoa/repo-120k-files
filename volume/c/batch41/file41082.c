// fichero 41082 -- macros y constantes -- MODIFICADO
#define LIMITE_41082 41282
#define FACTOR_41082 4

int aplicar_limite41082(int valor) {
    if (valor > LIMITE_41082) return LIMITE_41082;
    return valor * FACTOR_41082;
}
