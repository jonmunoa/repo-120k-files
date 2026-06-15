// fichero 21342 -- macros y constantes -- MODIFICADO
#define LIMITE_21342 21542
#define FACTOR_21342 4

int aplicar_limite21342(int valor) {
    if (valor > LIMITE_21342) return LIMITE_21342;
    return valor * FACTOR_21342;
}
