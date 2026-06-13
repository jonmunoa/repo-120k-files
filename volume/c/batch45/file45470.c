// fichero 45470 -- macros y constantes
#define LIMITE_45470 45570
#define FACTOR_45470 1

int aplicar_limite45470(int valor) {
    if (valor > LIMITE_45470) return LIMITE_45470;
    return valor * FACTOR_45470;
}
