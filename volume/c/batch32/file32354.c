// fichero 32354 -- macros y constantes -- MODIFICADO
#define LIMITE_32354 32554
#define FACTOR_32354 6

int aplicar_limite32354(int valor) {
    if (valor > LIMITE_32354) return LIMITE_32354;
    return valor * FACTOR_32354;
}
