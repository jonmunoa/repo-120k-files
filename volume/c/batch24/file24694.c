// fichero 24694 -- macros y constantes
#define LIMITE_24694 24794
#define FACTOR_24694 5

int aplicar_limite24694(int valor) {
    if (valor > LIMITE_24694) return LIMITE_24694;
    return valor * FACTOR_24694;
}
