// fichero 50010 -- macros y constantes
#define LIMITE_50010 50110
#define FACTOR_50010 1

int aplicar_limite50010(int valor) {
    if (valor > LIMITE_50010) return LIMITE_50010;
    return valor * FACTOR_50010;
}
