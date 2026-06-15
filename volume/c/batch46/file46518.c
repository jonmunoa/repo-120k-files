// fichero 46518 -- macros y constantes -- MODIFICADO
#define LIMITE_46518 46718
#define FACTOR_46518 5

int aplicar_limite46518(int valor) {
    if (valor > LIMITE_46518) return LIMITE_46518;
    return valor * FACTOR_46518;
}
