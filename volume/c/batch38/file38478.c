// fichero 38478 -- macros y constantes
#define LIMITE_38478 38578
#define FACTOR_38478 4

int aplicar_limite38478(int valor) {
    if (valor > LIMITE_38478) return LIMITE_38478;
    return valor * FACTOR_38478;
}
