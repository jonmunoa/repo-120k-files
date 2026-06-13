// fichero 48486 -- macros y constantes
#define LIMITE_48486 48586
#define FACTOR_48486 2

int aplicar_limite48486(int valor) {
    if (valor > LIMITE_48486) return LIMITE_48486;
    return valor * FACTOR_48486;
}
