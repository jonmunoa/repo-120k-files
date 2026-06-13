// fichero 35026 -- macros y constantes
#define LIMITE_35026 35126
#define FACTOR_35026 2

int aplicar_limite35026(int valor) {
    if (valor > LIMITE_35026) return LIMITE_35026;
    return valor * FACTOR_35026;
}
