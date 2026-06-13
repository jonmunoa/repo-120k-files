// fichero 37026 -- macros y constantes
#define LIMITE_37026 37126
#define FACTOR_37026 2

int aplicar_limite37026(int valor) {
    if (valor > LIMITE_37026) return LIMITE_37026;
    return valor * FACTOR_37026;
}
