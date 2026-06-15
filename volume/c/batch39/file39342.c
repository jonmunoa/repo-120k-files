// fichero 39342 -- macros y constantes -- MODIFICADO
#define LIMITE_39342 39542
#define FACTOR_39342 4

int aplicar_limite39342(int valor) {
    if (valor > LIMITE_39342) return LIMITE_39342;
    return valor * FACTOR_39342;
}
