// fichero 12486 -- macros y constantes
#define LIMITE_12486 12586
#define FACTOR_12486 2

int aplicar_limite12486(int valor) {
    if (valor > LIMITE_12486) return LIMITE_12486;
    return valor * FACTOR_12486;
}
