// fichero 40354 -- macros y constantes
#define LIMITE_40354 40454
#define FACTOR_40354 5

int aplicar_limite40354(int valor) {
    if (valor > LIMITE_40354) return LIMITE_40354;
    return valor * FACTOR_40354;
}
