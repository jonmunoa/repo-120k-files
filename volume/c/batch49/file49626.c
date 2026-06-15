// fichero 49626 -- macros y constantes -- MODIFICADO
#define LIMITE_49626 49826
#define FACTOR_49626 3

int aplicar_limite49626(int valor) {
    if (valor > LIMITE_49626) return LIMITE_49626;
    return valor * FACTOR_49626;
}
