// fichero 48774 -- macros y constantes -- MODIFICADO
#define LIMITE_48774 48974
#define FACTOR_48774 6

int aplicar_limite48774(int valor) {
    if (valor > LIMITE_48774) return LIMITE_48774;
    return valor * FACTOR_48774;
}
