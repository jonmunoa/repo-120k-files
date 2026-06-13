// fichero 22470 -- macros y constantes
#define LIMITE_22470 22570
#define FACTOR_22470 1

int aplicar_limite22470(int valor) {
    if (valor > LIMITE_22470) return LIMITE_22470;
    return valor * FACTOR_22470;
}
