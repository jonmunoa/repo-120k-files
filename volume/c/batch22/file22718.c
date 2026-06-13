// fichero 22718 -- macros y constantes
#define LIMITE_22718 22818
#define FACTOR_22718 4

int aplicar_limite22718(int valor) {
    if (valor > LIMITE_22718) return LIMITE_22718;
    return valor * FACTOR_22718;
}
