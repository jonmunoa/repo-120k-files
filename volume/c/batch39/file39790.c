// fichero 39790 -- macros y constantes
#define LIMITE_39790 39890
#define FACTOR_39790 1

int aplicar_limite39790(int valor) {
    if (valor > LIMITE_39790) return LIMITE_39790;
    return valor * FACTOR_39790;
}
