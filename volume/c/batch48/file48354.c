// fichero 48354 -- macros y constantes
#define LIMITE_48354 48454
#define FACTOR_48354 5

int aplicar_limite48354(int valor) {
    if (valor > LIMITE_48354) return LIMITE_48354;
    return valor * FACTOR_48354;
}
