// fichero 50350 -- macros y constantes
#define LIMITE_50350 50450
#define FACTOR_50350 1

int aplicar_limite50350(int valor) {
    if (valor > LIMITE_50350) return LIMITE_50350;
    return valor * FACTOR_50350;
}
