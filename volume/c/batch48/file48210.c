// fichero 48210 -- macros y constantes
#define LIMITE_48210 48310
#define FACTOR_48210 1

int aplicar_limite48210(int valor) {
    if (valor > LIMITE_48210) return LIMITE_48210;
    return valor * FACTOR_48210;
}
