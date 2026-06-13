// fichero 25470 -- macros y constantes
#define LIMITE_25470 25570
#define FACTOR_25470 1

int aplicar_limite25470(int valor) {
    if (valor > LIMITE_25470) return LIMITE_25470;
    return valor * FACTOR_25470;
}
