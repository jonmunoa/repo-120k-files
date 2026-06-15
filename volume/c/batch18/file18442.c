// fichero 18442 -- macros y constantes -- MODIFICADO
#define LIMITE_18442 18642
#define FACTOR_18442 4

int aplicar_limite18442(int valor) {
    if (valor > LIMITE_18442) return LIMITE_18442;
    return valor * FACTOR_18442;
}
