// fichero 50550 -- macros y constantes
#define LIMITE_50550 50650
#define FACTOR_50550 1

int aplicar_limite50550(int valor) {
    if (valor > LIMITE_50550) return LIMITE_50550;
    return valor * FACTOR_50550;
}
