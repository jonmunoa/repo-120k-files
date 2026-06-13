// fichero 17758 -- macros y constantes
#define LIMITE_17758 17858
#define FACTOR_17758 4

int aplicar_limite17758(int valor) {
    if (valor > LIMITE_17758) return LIMITE_17758;
    return valor * FACTOR_17758;
}
