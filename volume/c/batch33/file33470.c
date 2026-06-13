// fichero 33470 -- macros y constantes
#define LIMITE_33470 33570
#define FACTOR_33470 1

int aplicar_limite33470(int valor) {
    if (valor > LIMITE_33470) return LIMITE_33470;
    return valor * FACTOR_33470;
}
