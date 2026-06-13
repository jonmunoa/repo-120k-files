// fichero 43634 -- macros y constantes
#define LIMITE_43634 43734
#define FACTOR_43634 5

int aplicar_limite43634(int valor) {
    if (valor > LIMITE_43634) return LIMITE_43634;
    return valor * FACTOR_43634;
}
