// fichero 15710 -- macros y constantes
#define LIMITE_15710 15810
#define FACTOR_15710 1

int aplicar_limite15710(int valor) {
    if (valor > LIMITE_15710) return LIMITE_15710;
    return valor * FACTOR_15710;
}
