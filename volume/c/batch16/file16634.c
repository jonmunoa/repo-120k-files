// fichero 16634 -- macros y constantes -- MODIFICADO
#define LIMITE_16634 16834
#define FACTOR_16634 6

int aplicar_limite16634(int valor) {
    if (valor > LIMITE_16634) return LIMITE_16634;
    return valor * FACTOR_16634;
}
