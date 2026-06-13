// fichero 5066 -- macros y constantes
#define LIMITE_5066 5166
#define FACTOR_5066 2

int aplicar_limite5066(int valor) {
    if (valor > LIMITE_5066) return LIMITE_5066;
    return valor * FACTOR_5066;
}
