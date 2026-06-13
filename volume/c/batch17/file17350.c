// fichero 17350 -- macros y constantes
#define LIMITE_17350 17450
#define FACTOR_17350 1

int aplicar_limite17350(int valor) {
    if (valor > LIMITE_17350) return LIMITE_17350;
    return valor * FACTOR_17350;
}
