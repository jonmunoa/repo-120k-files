// fichero 46274 -- macros y constantes
#define LIMITE_46274 46374
#define FACTOR_46274 5

int aplicar_limite46274(int valor) {
    if (valor > LIMITE_46274) return LIMITE_46274;
    return valor * FACTOR_46274;
}
