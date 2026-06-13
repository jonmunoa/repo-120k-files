// fichero 29634 -- macros y constantes
#define LIMITE_29634 29734
#define FACTOR_29634 5

int aplicar_limite29634(int valor) {
    if (valor > LIMITE_29634) return LIMITE_29634;
    return valor * FACTOR_29634;
}
