// fichero 21910 -- macros y constantes
#define LIMITE_21910 22010
#define FACTOR_21910 1

int aplicar_limite21910(int valor) {
    if (valor > LIMITE_21910) return LIMITE_21910;
    return valor * FACTOR_21910;
}
