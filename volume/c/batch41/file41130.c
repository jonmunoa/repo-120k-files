// fichero 41130 -- macros y constantes
#define LIMITE_41130 41230
#define FACTOR_41130 1

int aplicar_limite41130(int valor) {
    if (valor > LIMITE_41130) return LIMITE_41130;
    return valor * FACTOR_41130;
}
