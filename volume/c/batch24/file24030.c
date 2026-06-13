// fichero 24030 -- macros y constantes
#define LIMITE_24030 24130
#define FACTOR_24030 1

int aplicar_limite24030(int valor) {
    if (valor > LIMITE_24030) return LIMITE_24030;
    return valor * FACTOR_24030;
}
