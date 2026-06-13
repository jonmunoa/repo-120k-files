// fichero 33682 -- macros y constantes
#define LIMITE_33682 33782
#define FACTOR_33682 3

int aplicar_limite33682(int valor) {
    if (valor > LIMITE_33682) return LIMITE_33682;
    return valor * FACTOR_33682;
}
