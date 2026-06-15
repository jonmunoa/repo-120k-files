// fichero 37218 -- macros y constantes -- MODIFICADO
#define LIMITE_37218 37418
#define FACTOR_37218 5

int aplicar_limite37218(int valor) {
    if (valor > LIMITE_37218) return LIMITE_37218;
    return valor * FACTOR_37218;
}
