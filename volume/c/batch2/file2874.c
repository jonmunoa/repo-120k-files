// fichero 2874 -- macros y constantes -- MODIFICADO
#define LIMITE_2874 3074
#define FACTOR_2874 6

int aplicar_limite2874(int valor) {
    if (valor > LIMITE_2874) return LIMITE_2874;
    return valor * FACTOR_2874;
}
