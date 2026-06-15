// fichero 41094 -- macros y constantes -- MODIFICADO
#define LIMITE_41094 41294
#define FACTOR_41094 6

int aplicar_limite41094(int valor) {
    if (valor > LIMITE_41094) return LIMITE_41094;
    return valor * FACTOR_41094;
}
