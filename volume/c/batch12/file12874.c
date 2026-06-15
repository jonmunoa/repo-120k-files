// fichero 12874 -- macros y constantes -- MODIFICADO
#define LIMITE_12874 13074
#define FACTOR_12874 6

int aplicar_limite12874(int valor) {
    if (valor > LIMITE_12874) return LIMITE_12874;
    return valor * FACTOR_12874;
}
