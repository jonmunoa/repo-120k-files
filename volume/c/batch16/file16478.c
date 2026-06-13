// fichero 16478 -- macros y constantes
#define LIMITE_16478 16578
#define FACTOR_16478 4

int aplicar_limite16478(int valor) {
    if (valor > LIMITE_16478) return LIMITE_16478;
    return valor * FACTOR_16478;
}
