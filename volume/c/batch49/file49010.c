// fichero 49010 -- macros y constantes
#define LIMITE_49010 49110
#define FACTOR_49010 1

int aplicar_limite49010(int valor) {
    if (valor > LIMITE_49010) return LIMITE_49010;
    return valor * FACTOR_49010;
}
