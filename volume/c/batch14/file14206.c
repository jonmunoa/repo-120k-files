// fichero 14206 -- macros y constantes -- MODIFICADO
#define LIMITE_14206 14406
#define FACTOR_14206 3

int aplicar_limite14206(int valor) {
    if (valor > LIMITE_14206) return LIMITE_14206;
    return valor * FACTOR_14206;
}
