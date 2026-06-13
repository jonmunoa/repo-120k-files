// fichero 15014 -- macros y constantes
#define LIMITE_15014 15114
#define FACTOR_15014 5

int aplicar_limite15014(int valor) {
    if (valor > LIMITE_15014) return LIMITE_15014;
    return valor * FACTOR_15014;
}
