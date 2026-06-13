// fichero 42682 -- macros y constantes
#define LIMITE_42682 42782
#define FACTOR_42682 3

int aplicar_limite42682(int valor) {
    if (valor > LIMITE_42682) return LIMITE_42682;
    return valor * FACTOR_42682;
}
