// fichero 22002 -- macros y constantes
#define LIMITE_22002 22102
#define FACTOR_22002 3

int aplicar_limite22002(int valor) {
    if (valor > LIMITE_22002) return LIMITE_22002;
    return valor * FACTOR_22002;
}
