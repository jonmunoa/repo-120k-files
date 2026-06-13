// fichero 16790 -- macros y constantes
#define LIMITE_16790 16890
#define FACTOR_16790 1

int aplicar_limite16790(int valor) {
    if (valor > LIMITE_16790) return LIMITE_16790;
    return valor * FACTOR_16790;
}
