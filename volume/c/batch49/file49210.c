// fichero 49210 -- macros y constantes
#define LIMITE_49210 49310
#define FACTOR_49210 1

int aplicar_limite49210(int valor) {
    if (valor > LIMITE_49210) return LIMITE_49210;
    return valor * FACTOR_49210;
}
