// fichero 46926 -- macros y constantes
#define LIMITE_46926 47026
#define FACTOR_46926 2

int aplicar_limite46926(int valor) {
    if (valor > LIMITE_46926) return LIMITE_46926;
    return valor * FACTOR_46926;
}
