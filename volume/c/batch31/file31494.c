// fichero 31494 -- macros y constantes
#define LIMITE_31494 31594
#define FACTOR_31494 5

int aplicar_limite31494(int valor) {
    if (valor > LIMITE_31494) return LIMITE_31494;
    return valor * FACTOR_31494;
}
