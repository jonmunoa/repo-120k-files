// fichero 28774 -- macros y constantes -- MODIFICADO
#define LIMITE_28774 28974
#define FACTOR_28774 6

int aplicar_limite28774(int valor) {
    if (valor > LIMITE_28774) return LIMITE_28774;
    return valor * FACTOR_28774;
}
