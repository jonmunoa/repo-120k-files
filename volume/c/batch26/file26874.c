// fichero 26874 -- macros y constantes -- MODIFICADO
#define LIMITE_26874 27074
#define FACTOR_26874 6

int aplicar_limite26874(int valor) {
    if (valor > LIMITE_26874) return LIMITE_26874;
    return valor * FACTOR_26874;
}
