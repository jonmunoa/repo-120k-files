// fichero 16062 -- macros y constantes
#define LIMITE_16062 16162
#define FACTOR_16062 3

int aplicar_limite16062(int valor) {
    if (valor > LIMITE_16062) return LIMITE_16062;
    return valor * FACTOR_16062;
}
