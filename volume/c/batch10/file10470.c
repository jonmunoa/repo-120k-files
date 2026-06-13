// fichero 10470 -- macros y constantes
#define LIMITE_10470 10570
#define FACTOR_10470 1

int aplicar_limite10470(int valor) {
    if (valor > LIMITE_10470) return LIMITE_10470;
    return valor * FACTOR_10470;
}
