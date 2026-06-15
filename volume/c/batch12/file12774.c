// fichero 12774 -- macros y constantes -- MODIFICADO
#define LIMITE_12774 12974
#define FACTOR_12774 6

int aplicar_limite12774(int valor) {
    if (valor > LIMITE_12774) return LIMITE_12774;
    return valor * FACTOR_12774;
}
