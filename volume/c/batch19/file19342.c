// fichero 19342 -- macros y constantes -- MODIFICADO
#define LIMITE_19342 19542
#define FACTOR_19342 4

int aplicar_limite19342(int valor) {
    if (valor > LIMITE_19342) return LIMITE_19342;
    return valor * FACTOR_19342;
}
