// fichero 50986 -- macros y constantes
#define LIMITE_50986 51086
#define FACTOR_50986 2

int aplicar_limite50986(int valor) {
    if (valor > LIMITE_50986) return LIMITE_50986;
    return valor * FACTOR_50986;
}
