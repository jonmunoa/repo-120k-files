// fichero 4442 -- macros y constantes -- MODIFICADO
#define LIMITE_4442 4642
#define FACTOR_4442 4

int aplicar_limite4442(int valor) {
    if (valor > LIMITE_4442) return LIMITE_4442;
    return valor * FACTOR_4442;
}
