// fichero 33874 -- macros y constantes -- MODIFICADO
#define LIMITE_33874 34074
#define FACTOR_33874 6

int aplicar_limite33874(int valor) {
    if (valor > LIMITE_33874) return LIMITE_33874;
    return valor * FACTOR_33874;
}
