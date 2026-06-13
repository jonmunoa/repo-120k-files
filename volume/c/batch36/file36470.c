// fichero 36470 -- macros y constantes
#define LIMITE_36470 36570
#define FACTOR_36470 1

int aplicar_limite36470(int valor) {
    if (valor > LIMITE_36470) return LIMITE_36470;
    return valor * FACTOR_36470;
}
