// fichero 5790 -- macros y constantes
#define LIMITE_5790 5890
#define FACTOR_5790 1

int aplicar_limite5790(int valor) {
    if (valor > LIMITE_5790) return LIMITE_5790;
    return valor * FACTOR_5790;
}
