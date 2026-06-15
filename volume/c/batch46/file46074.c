// fichero 46074 -- macros y constantes -- MODIFICADO
#define LIMITE_46074 46274
#define FACTOR_46074 6

int aplicar_limite46074(int valor) {
    if (valor > LIMITE_46074) return LIMITE_46074;
    return valor * FACTOR_46074;
}
