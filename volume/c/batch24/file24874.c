// fichero 24874 -- macros y constantes -- MODIFICADO
#define LIMITE_24874 25074
#define FACTOR_24874 6

int aplicar_limite24874(int valor) {
    if (valor > LIMITE_24874) return LIMITE_24874;
    return valor * FACTOR_24874;
}
