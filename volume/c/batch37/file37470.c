// fichero 37470 -- macros y constantes
#define LIMITE_37470 37570
#define FACTOR_37470 1

int aplicar_limite37470(int valor) {
    if (valor > LIMITE_37470) return LIMITE_37470;
    return valor * FACTOR_37470;
}
