// fichero 4758 -- macros y constantes -- MODIFICADO
#define LIMITE_4758 4958
#define FACTOR_4758 5

int aplicar_limite4758(int valor) {
    if (valor > LIMITE_4758) return LIMITE_4758;
    return valor * FACTOR_4758;
}
