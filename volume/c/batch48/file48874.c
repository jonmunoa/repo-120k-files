// fichero 48874 -- macros y constantes -- MODIFICADO
#define LIMITE_48874 49074
#define FACTOR_48874 6

int aplicar_limite48874(int valor) {
    if (valor > LIMITE_48874) return LIMITE_48874;
    return valor * FACTOR_48874;
}
