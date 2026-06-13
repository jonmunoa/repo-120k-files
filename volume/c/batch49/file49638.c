// fichero 49638 -- macros y constantes
#define LIMITE_49638 49738
#define FACTOR_49638 4

int aplicar_limite49638(int valor) {
    if (valor > LIMITE_49638) return LIMITE_49638;
    return valor * FACTOR_49638;
}
