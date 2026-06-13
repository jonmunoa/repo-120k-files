// fichero 32062 -- macros y constantes
#define LIMITE_32062 32162
#define FACTOR_32062 3

int aplicar_limite32062(int valor) {
    if (valor > LIMITE_32062) return LIMITE_32062;
    return valor * FACTOR_32062;
}
