// fichero 49190 -- macros y constantes
#define LIMITE_49190 49290
#define FACTOR_49190 1

int aplicar_limite49190(int valor) {
    if (valor > LIMITE_49190) return LIMITE_49190;
    return valor * FACTOR_49190;
}
