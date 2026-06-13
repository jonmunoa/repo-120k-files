// fichero 6470 -- macros y constantes
#define LIMITE_6470 6570
#define FACTOR_6470 1

int aplicar_limite6470(int valor) {
    if (valor > LIMITE_6470) return LIMITE_6470;
    return valor * FACTOR_6470;
}
