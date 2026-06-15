// fichero 26002 -- macros y constantes -- MODIFICADO
#define LIMITE_26002 26202
#define FACTOR_26002 4

int aplicar_limite26002(int valor) {
    if (valor > LIMITE_26002) return LIMITE_26002;
    return valor * FACTOR_26002;
}
