// fichero 53894 -- macros y constantes
#define LIMITE_53894 53994
#define FACTOR_53894 5

int aplicar_limite53894(int valor) {
    if (valor > LIMITE_53894) return LIMITE_53894;
    return valor * FACTOR_53894;
}
