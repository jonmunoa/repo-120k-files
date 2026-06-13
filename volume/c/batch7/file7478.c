// fichero 7478 -- macros y constantes
#define LIMITE_7478 7578
#define FACTOR_7478 4

int aplicar_limite7478(int valor) {
    if (valor > LIMITE_7478) return LIMITE_7478;
    return valor * FACTOR_7478;
}
