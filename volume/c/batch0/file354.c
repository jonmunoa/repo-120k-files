// fichero 354 -- macros y constantes -- MODIFICADO
#define LIMITE_354 554
#define FACTOR_354 6

int aplicar_limite354(int valor) {
    if (valor > LIMITE_354) return LIMITE_354;
    return valor * FACTOR_354;
}
