// fichero 4470 -- macros y constantes
#define LIMITE_4470 4570
#define FACTOR_4470 1

int aplicar_limite4470(int valor) {
    if (valor > LIMITE_4470) return LIMITE_4470;
    return valor * FACTOR_4470;
}
