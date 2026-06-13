// fichero 4790 -- macros y constantes
#define LIMITE_4790 4890
#define FACTOR_4790 1

int aplicar_limite4790(int valor) {
    if (valor > LIMITE_4790) return LIMITE_4790;
    return valor * FACTOR_4790;
}
