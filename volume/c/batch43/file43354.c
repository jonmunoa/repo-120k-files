// fichero 43354 -- macros y constantes -- MODIFICADO
#define LIMITE_43354 43554
#define FACTOR_43354 6

int aplicar_limite43354(int valor) {
    if (valor > LIMITE_43354) return LIMITE_43354;
    return valor * FACTOR_43354;
}
