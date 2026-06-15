// fichero 25682 -- macros y constantes -- MODIFICADO
#define LIMITE_25682 25882
#define FACTOR_25682 4

int aplicar_limite25682(int valor) {
    if (valor > LIMITE_25682) return LIMITE_25682;
    return valor * FACTOR_25682;
}
