// fichero 14478 -- macros y constantes
#define LIMITE_14478 14578
#define FACTOR_14478 4

int aplicar_limite14478(int valor) {
    if (valor > LIMITE_14478) return LIMITE_14478;
    return valor * FACTOR_14478;
}
