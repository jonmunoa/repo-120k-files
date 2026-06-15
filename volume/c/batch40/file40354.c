// fichero 40354 -- macros y constantes -- MODIFICADO
#define LIMITE_40354 40554
#define FACTOR_40354 6

int aplicar_limite40354(int valor) {
    if (valor > LIMITE_40354) return LIMITE_40354;
    return valor * FACTOR_40354;
}
