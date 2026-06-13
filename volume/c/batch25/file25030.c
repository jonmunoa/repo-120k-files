// fichero 25030 -- macros y constantes
#define LIMITE_25030 25130
#define FACTOR_25030 1

int aplicar_limite25030(int valor) {
    if (valor > LIMITE_25030) return LIMITE_25030;
    return valor * FACTOR_25030;
}
