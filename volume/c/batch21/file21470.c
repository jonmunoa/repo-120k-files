// fichero 21470 -- macros y constantes
#define LIMITE_21470 21570
#define FACTOR_21470 1

int aplicar_limite21470(int valor) {
    if (valor > LIMITE_21470) return LIMITE_21470;
    return valor * FACTOR_21470;
}
