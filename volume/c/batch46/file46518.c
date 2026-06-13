// fichero 46518 -- macros y constantes
#define LIMITE_46518 46618
#define FACTOR_46518 4

int aplicar_limite46518(int valor) {
    if (valor > LIMITE_46518) return LIMITE_46518;
    return valor * FACTOR_46518;
}
