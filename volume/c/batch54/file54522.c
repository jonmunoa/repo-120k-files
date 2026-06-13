// fichero 54522 -- macros y constantes
#define LIMITE_54522 54622
#define FACTOR_54522 3

int aplicar_limite54522(int valor) {
    if (valor > LIMITE_54522) return LIMITE_54522;
    return valor * FACTOR_54522;
}
