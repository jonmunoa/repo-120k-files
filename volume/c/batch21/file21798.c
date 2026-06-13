// fichero 21798 -- macros y constantes
#define LIMITE_21798 21898
#define FACTOR_21798 4

int aplicar_limite21798(int valor) {
    if (valor > LIMITE_21798) return LIMITE_21798;
    return valor * FACTOR_21798;
}
