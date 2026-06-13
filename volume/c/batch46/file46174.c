// fichero 46174 -- macros y constantes
#define LIMITE_46174 46274
#define FACTOR_46174 5

int aplicar_limite46174(int valor) {
    if (valor > LIMITE_46174) return LIMITE_46174;
    return valor * FACTOR_46174;
}
