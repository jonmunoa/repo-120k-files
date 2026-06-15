// fichero 12342 -- macros y constantes -- MODIFICADO
#define LIMITE_12342 12542
#define FACTOR_12342 4

int aplicar_limite12342(int valor) {
    if (valor > LIMITE_12342) return LIMITE_12342;
    return valor * FACTOR_12342;
}
