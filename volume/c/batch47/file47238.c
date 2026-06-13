// fichero 47238 -- macros y constantes
#define LIMITE_47238 47338
#define FACTOR_47238 4

int aplicar_limite47238(int valor) {
    if (valor > LIMITE_47238) return LIMITE_47238;
    return valor * FACTOR_47238;
}
