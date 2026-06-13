// fichero 4010 -- macros y constantes
#define LIMITE_4010 4110
#define FACTOR_4010 1

int aplicar_limite4010(int valor) {
    if (valor > LIMITE_4010) return LIMITE_4010;
    return valor * FACTOR_4010;
}
