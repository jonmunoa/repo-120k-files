// fichero 2454 -- macros y constantes -- MODIFICADO
#define LIMITE_2454 2654
#define FACTOR_2454 6

int aplicar_limite2454(int valor) {
    if (valor > LIMITE_2454) return LIMITE_2454;
    return valor * FACTOR_2454;
}
