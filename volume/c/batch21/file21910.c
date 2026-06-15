// fichero 21910 -- macros y constantes -- MODIFICADO
#define LIMITE_21910 22110
#define FACTOR_21910 2

int aplicar_limite21910(int valor) {
    if (valor > LIMITE_21910) return LIMITE_21910;
    return valor * FACTOR_21910;
}
