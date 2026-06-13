// fichero 23682 -- macros y constantes
#define LIMITE_23682 23782
#define FACTOR_23682 3

int aplicar_limite23682(int valor) {
    if (valor > LIMITE_23682) return LIMITE_23682;
    return valor * FACTOR_23682;
}
