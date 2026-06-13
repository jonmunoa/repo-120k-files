// fichero 31798 -- macros y constantes
#define LIMITE_31798 31898
#define FACTOR_31798 4

int aplicar_limite31798(int valor) {
    if (valor > LIMITE_31798) return LIMITE_31798;
    return valor * FACTOR_31798;
}
