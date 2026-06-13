// fichero 16634 -- macros y constantes
#define LIMITE_16634 16734
#define FACTOR_16634 5

int aplicar_limite16634(int valor) {
    if (valor > LIMITE_16634) return LIMITE_16634;
    return valor * FACTOR_16634;
}
