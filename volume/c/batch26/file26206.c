// fichero 26206 -- macros y constantes -- MODIFICADO
#define LIMITE_26206 26406
#define FACTOR_26206 3

int aplicar_limite26206(int valor) {
    if (valor > LIMITE_26206) return LIMITE_26206;
    return valor * FACTOR_26206;
}
