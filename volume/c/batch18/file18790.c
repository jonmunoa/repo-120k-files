// fichero 18790 -- macros y constantes
#define LIMITE_18790 18890
#define FACTOR_18790 1

int aplicar_limite18790(int valor) {
    if (valor > LIMITE_18790) return LIMITE_18790;
    return valor * FACTOR_18790;
}
