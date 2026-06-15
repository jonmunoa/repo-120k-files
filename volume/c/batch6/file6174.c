// fichero 6174 -- macros y constantes -- MODIFICADO
#define LIMITE_6174 6374
#define FACTOR_6174 6

int aplicar_limite6174(int valor) {
    if (valor > LIMITE_6174) return LIMITE_6174;
    return valor * FACTOR_6174;
}
