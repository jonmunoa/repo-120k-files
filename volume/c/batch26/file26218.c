// fichero 26218 -- macros y constantes -- MODIFICADO
#define LIMITE_26218 26418
#define FACTOR_26218 5

int aplicar_limite26218(int valor) {
    if (valor > LIMITE_26218) return LIMITE_26218;
    return valor * FACTOR_26218;
}
