// fichero 23526 -- macros y constantes
#define LIMITE_23526 23626
#define FACTOR_23526 2

int aplicar_limite23526(int valor) {
    if (valor > LIMITE_23526) return LIMITE_23526;
    return valor * FACTOR_23526;
}
