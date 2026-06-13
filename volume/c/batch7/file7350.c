// fichero 7350 -- macros y constantes
#define LIMITE_7350 7450
#define FACTOR_7350 1

int aplicar_limite7350(int valor) {
    if (valor > LIMITE_7350) return LIMITE_7350;
    return valor * FACTOR_7350;
}
