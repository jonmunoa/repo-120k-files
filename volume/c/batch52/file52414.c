// fichero 52414 -- macros y constantes
#define LIMITE_52414 52514
#define FACTOR_52414 5

int aplicar_limite52414(int valor) {
    if (valor > LIMITE_52414) return LIMITE_52414;
    return valor * FACTOR_52414;
}
