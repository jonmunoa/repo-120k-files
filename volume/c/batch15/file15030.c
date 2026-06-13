// fichero 15030 -- macros y constantes
#define LIMITE_15030 15130
#define FACTOR_15030 1

int aplicar_limite15030(int valor) {
    if (valor > LIMITE_15030) return LIMITE_15030;
    return valor * FACTOR_15030;
}
