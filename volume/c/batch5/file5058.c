// fichero 5058 -- macros y constantes
#define LIMITE_5058 5158
#define FACTOR_5058 4

int aplicar_limite5058(int valor) {
    if (valor > LIMITE_5058) return LIMITE_5058;
    return valor * FACTOR_5058;
}
