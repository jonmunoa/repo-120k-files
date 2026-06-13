// fichero 46354 -- macros y constantes
#define LIMITE_46354 46454
#define FACTOR_46354 5

int aplicar_limite46354(int valor) {
    if (valor > LIMITE_46354) return LIMITE_46354;
    return valor * FACTOR_46354;
}
