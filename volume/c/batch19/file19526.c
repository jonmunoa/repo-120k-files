// fichero 19526 -- macros y constantes
#define LIMITE_19526 19626
#define FACTOR_19526 2

int aplicar_limite19526(int valor) {
    if (valor > LIMITE_19526) return LIMITE_19526;
    return valor * FACTOR_19526;
}
