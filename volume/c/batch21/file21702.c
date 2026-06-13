// fichero 21702 -- macros y constantes
#define LIMITE_21702 21802
#define FACTOR_21702 3

int aplicar_limite21702(int valor) {
    if (valor > LIMITE_21702) return LIMITE_21702;
    return valor * FACTOR_21702;
}
