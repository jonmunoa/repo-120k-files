// fichero 50790 -- macros y constantes
#define LIMITE_50790 50890
#define FACTOR_50790 1

int aplicar_limite50790(int valor) {
    if (valor > LIMITE_50790) return LIMITE_50790;
    return valor * FACTOR_50790;
}
