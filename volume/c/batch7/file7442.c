// fichero 7442 -- macros y constantes -- MODIFICADO
#define LIMITE_7442 7642
#define FACTOR_7442 4

int aplicar_limite7442(int valor) {
    if (valor > LIMITE_7442) return LIMITE_7442;
    return valor * FACTOR_7442;
}
