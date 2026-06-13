// fichero 41354 -- macros y constantes
#define LIMITE_41354 41454
#define FACTOR_41354 5

int aplicar_limite41354(int valor) {
    if (valor > LIMITE_41354) return LIMITE_41354;
    return valor * FACTOR_41354;
}
