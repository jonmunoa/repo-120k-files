// fichero 36002 -- macros y constantes -- MODIFICADO
#define LIMITE_36002 36202
#define FACTOR_36002 4

int aplicar_limite36002(int valor) {
    if (valor > LIMITE_36002) return LIMITE_36002;
    return valor * FACTOR_36002;
}
