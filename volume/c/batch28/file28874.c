// fichero 28874 -- macros y constantes -- MODIFICADO
#define LIMITE_28874 29074
#define FACTOR_28874 6

int aplicar_limite28874(int valor) {
    if (valor > LIMITE_28874) return LIMITE_28874;
    return valor * FACTOR_28874;
}
