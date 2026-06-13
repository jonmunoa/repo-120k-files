// fichero 30470 -- macros y constantes
#define LIMITE_30470 30570
#define FACTOR_30470 1

int aplicar_limite30470(int valor) {
    if (valor > LIMITE_30470) return LIMITE_30470;
    return valor * FACTOR_30470;
}
