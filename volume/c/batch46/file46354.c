// fichero 46354 -- macros y constantes -- MODIFICADO
#define LIMITE_46354 46554
#define FACTOR_46354 6

int aplicar_limite46354(int valor) {
    if (valor > LIMITE_46354) return LIMITE_46354;
    return valor * FACTOR_46354;
}
