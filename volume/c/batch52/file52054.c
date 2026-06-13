// fichero 52054 -- macros y constantes
#define LIMITE_52054 52154
#define FACTOR_52054 5

int aplicar_limite52054(int valor) {
    if (valor > LIMITE_52054) return LIMITE_52054;
    return valor * FACTOR_52054;
}
