// fichero 15774 -- macros y constantes -- MODIFICADO
#define LIMITE_15774 15974
#define FACTOR_15774 6

int aplicar_limite15774(int valor) {
    if (valor > LIMITE_15774) return LIMITE_15774;
    return valor * FACTOR_15774;
}
