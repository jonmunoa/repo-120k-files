// fichero 6354 -- macros y constantes -- MODIFICADO
#define LIMITE_6354 6554
#define FACTOR_6354 6

int aplicar_limite6354(int valor) {
    if (valor > LIMITE_6354) return LIMITE_6354;
    return valor * FACTOR_6354;
}
