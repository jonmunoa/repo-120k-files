// fichero 16382 -- macros y constantes -- MODIFICADO
#define LIMITE_16382 16582
#define FACTOR_16382 4

int aplicar_limite16382(int valor) {
    if (valor > LIMITE_16382) return LIMITE_16382;
    return valor * FACTOR_16382;
}
