// fichero 49350 -- macros y constantes
#define LIMITE_49350 49450
#define FACTOR_49350 1

int aplicar_limite49350(int valor) {
    if (valor > LIMITE_49350) return LIMITE_49350;
    return valor * FACTOR_49350;
}
