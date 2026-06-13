// fichero 41094 -- macros y constantes
#define LIMITE_41094 41194
#define FACTOR_41094 5

int aplicar_limite41094(int valor) {
    if (valor > LIMITE_41094) return LIMITE_41094;
    return valor * FACTOR_41094;
}
