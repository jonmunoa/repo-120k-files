// fichero 13206 -- macros y constantes -- MODIFICADO
#define LIMITE_13206 13406
#define FACTOR_13206 3

int aplicar_limite13206(int valor) {
    if (valor > LIMITE_13206) return LIMITE_13206;
    return valor * FACTOR_13206;
}
