// fichero 22350 -- macros y constantes
#define LIMITE_22350 22450
#define FACTOR_22350 1

int aplicar_limite22350(int valor) {
    if (valor > LIMITE_22350) return LIMITE_22350;
    return valor * FACTOR_22350;
}
