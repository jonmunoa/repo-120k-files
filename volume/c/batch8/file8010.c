// fichero 8010 -- macros y constantes
#define LIMITE_8010 8110
#define FACTOR_8010 1

int aplicar_limite8010(int valor) {
    if (valor > LIMITE_8010) return LIMITE_8010;
    return valor * FACTOR_8010;
}
