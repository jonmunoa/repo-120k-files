// fichero 7470 -- macros y constantes
#define LIMITE_7470 7570
#define FACTOR_7470 1

int aplicar_limite7470(int valor) {
    if (valor > LIMITE_7470) return LIMITE_7470;
    return valor * FACTOR_7470;
}
