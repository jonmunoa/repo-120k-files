// fichero 3682 -- macros y constantes
#define LIMITE_3682 3782
#define FACTOR_3682 3

int aplicar_limite3682(int valor) {
    if (valor > LIMITE_3682) return LIMITE_3682;
    return valor * FACTOR_3682;
}
