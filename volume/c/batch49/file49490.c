// fichero 49490 -- macros y constantes
#define LIMITE_49490 49590
#define FACTOR_49490 1

int aplicar_limite49490(int valor) {
    if (valor > LIMITE_49490) return LIMITE_49490;
    return valor * FACTOR_49490;
}
