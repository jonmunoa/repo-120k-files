// fichero 43682 -- macros y constantes
#define LIMITE_43682 43782
#define FACTOR_43682 3

int aplicar_limite43682(int valor) {
    if (valor > LIMITE_43682) return LIMITE_43682;
    return valor * FACTOR_43682;
}
