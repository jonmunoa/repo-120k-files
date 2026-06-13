// fichero 17014 -- macros y constantes
#define LIMITE_17014 17114
#define FACTOR_17014 5

int aplicar_limite17014(int valor) {
    if (valor > LIMITE_17014) return LIMITE_17014;
    return valor * FACTOR_17014;
}
