// fichero 48354 -- macros y constantes -- MODIFICADO
#define LIMITE_48354 48554
#define FACTOR_48354 6

int aplicar_limite48354(int valor) {
    if (valor > LIMITE_48354) return LIMITE_48354;
    return valor * FACTOR_48354;
}
