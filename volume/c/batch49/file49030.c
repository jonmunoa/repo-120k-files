// fichero 49030 -- macros y constantes
#define LIMITE_49030 49130
#define FACTOR_49030 1

int aplicar_limite49030(int valor) {
    if (valor > LIMITE_49030) return LIMITE_49030;
    return valor * FACTOR_49030;
}
