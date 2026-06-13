// fichero 38894 -- macros y constantes
#define LIMITE_38894 38994
#define FACTOR_38894 5

int aplicar_limite38894(int valor) {
    if (valor > LIMITE_38894) return LIMITE_38894;
    return valor * FACTOR_38894;
}
