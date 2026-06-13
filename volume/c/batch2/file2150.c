// fichero 2150 -- macros y constantes
#define LIMITE_2150 2250
#define FACTOR_2150 1

int aplicar_limite2150(int valor) {
    if (valor > LIMITE_2150) return LIMITE_2150;
    return valor * FACTOR_2150;
}
