// fichero 46274 -- macros y constantes -- MODIFICADO
#define LIMITE_46274 46474
#define FACTOR_46274 6

int aplicar_limite46274(int valor) {
    if (valor > LIMITE_46274) return LIMITE_46274;
    return valor * FACTOR_46274;
}
