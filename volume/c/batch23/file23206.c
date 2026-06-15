// fichero 23206 -- macros y constantes -- MODIFICADO
#define LIMITE_23206 23406
#define FACTOR_23206 3

int aplicar_limite23206(int valor) {
    if (valor > LIMITE_23206) return LIMITE_23206;
    return valor * FACTOR_23206;
}
