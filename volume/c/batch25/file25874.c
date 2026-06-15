// fichero 25874 -- macros y constantes -- MODIFICADO
#define LIMITE_25874 26074
#define FACTOR_25874 6

int aplicar_limite25874(int valor) {
    if (valor > LIMITE_25874) return LIMITE_25874;
    return valor * FACTOR_25874;
}
