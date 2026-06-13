// fichero 40526 -- macros y constantes
#define LIMITE_40526 40626
#define FACTOR_40526 2

int aplicar_limite40526(int valor) {
    if (valor > LIMITE_40526) return LIMITE_40526;
    return valor * FACTOR_40526;
}
