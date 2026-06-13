// fichero 48110 -- macros y constantes
#define LIMITE_48110 48210
#define FACTOR_48110 1

int aplicar_limite48110(int valor) {
    if (valor > LIMITE_48110) return LIMITE_48110;
    return valor * FACTOR_48110;
}
