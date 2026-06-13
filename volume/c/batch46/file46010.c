// fichero 46010 -- macros y constantes
#define LIMITE_46010 46110
#define FACTOR_46010 1

int aplicar_limite46010(int valor) {
    if (valor > LIMITE_46010) return LIMITE_46010;
    return valor * FACTOR_46010;
}
