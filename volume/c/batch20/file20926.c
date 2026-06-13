// fichero 20926 -- macros y constantes
#define LIMITE_20926 21026
#define FACTOR_20926 2

int aplicar_limite20926(int valor) {
    if (valor > LIMITE_20926) return LIMITE_20926;
    return valor * FACTOR_20926;
}
