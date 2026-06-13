// fichero 12702 -- macros y constantes
#define LIMITE_12702 12802
#define FACTOR_12702 3

int aplicar_limite12702(int valor) {
    if (valor > LIMITE_12702) return LIMITE_12702;
    return valor * FACTOR_12702;
}
