// fichero 5354 -- macros y constantes -- MODIFICADO
#define LIMITE_5354 5554
#define FACTOR_5354 6

int aplicar_limite5354(int valor) {
    if (valor > LIMITE_5354) return LIMITE_5354;
    return valor * FACTOR_5354;
}
