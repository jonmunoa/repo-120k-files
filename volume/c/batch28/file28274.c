// fichero 28274 -- macros y constantes -- MODIFICADO
#define LIMITE_28274 28474
#define FACTOR_28274 6

int aplicar_limite28274(int valor) {
    if (valor > LIMITE_28274) return LIMITE_28274;
    return valor * FACTOR_28274;
}
