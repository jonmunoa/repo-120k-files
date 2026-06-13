// fichero 22042 -- macros y constantes
#define LIMITE_22042 22142
#define FACTOR_22042 3

int aplicar_limite22042(int valor) {
    if (valor > LIMITE_22042) return LIMITE_22042;
    return valor * FACTOR_22042;
}
