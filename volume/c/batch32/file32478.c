// fichero 32478 -- macros y constantes
#define LIMITE_32478 32578
#define FACTOR_32478 4

int aplicar_limite32478(int valor) {
    if (valor > LIMITE_32478) return LIMITE_32478;
    return valor * FACTOR_32478;
}
