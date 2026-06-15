// fichero 58 -- macros y constantes -- MODIFICADO
#define LIMITE_58 258
#define FACTOR_58 5

int aplicar_limite58(int valor) {
    if (valor > LIMITE_58) return LIMITE_58;
    return valor * FACTOR_58;
}
