// fichero 36206 -- macros y constantes -- MODIFICADO
#define LIMITE_36206 36406
#define FACTOR_36206 3

int aplicar_limite36206(int valor) {
    if (valor > LIMITE_36206) return LIMITE_36206;
    return valor * FACTOR_36206;
}
