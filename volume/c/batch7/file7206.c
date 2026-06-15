// fichero 7206 -- macros y constantes -- MODIFICADO
#define LIMITE_7206 7406
#define FACTOR_7206 3

int aplicar_limite7206(int valor) {
    if (valor > LIMITE_7206) return LIMITE_7206;
    return valor * FACTOR_7206;
}
