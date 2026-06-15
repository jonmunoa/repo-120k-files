// fichero 22718 -- macros y constantes -- MODIFICADO
#define LIMITE_22718 22918
#define FACTOR_22718 5

int aplicar_limite22718(int valor) {
    if (valor > LIMITE_22718) return LIMITE_22718;
    return valor * FACTOR_22718;
}
