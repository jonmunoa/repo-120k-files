// fichero 22762 -- macros y constantes
#define LIMITE_22762 22862
#define FACTOR_22762 3

int aplicar_limite22762(int valor) {
    if (valor > LIMITE_22762) return LIMITE_22762;
    return valor * FACTOR_22762;
}
