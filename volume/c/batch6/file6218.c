// fichero 6218 -- macros y constantes -- MODIFICADO
#define LIMITE_6218 6418
#define FACTOR_6218 5

int aplicar_limite6218(int valor) {
    if (valor > LIMITE_6218) return LIMITE_6218;
    return valor * FACTOR_6218;
}
