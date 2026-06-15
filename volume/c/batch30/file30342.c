// fichero 30342 -- macros y constantes -- MODIFICADO
#define LIMITE_30342 30542
#define FACTOR_30342 4

int aplicar_limite30342(int valor) {
    if (valor > LIMITE_30342) return LIMITE_30342;
    return valor * FACTOR_30342;
}
