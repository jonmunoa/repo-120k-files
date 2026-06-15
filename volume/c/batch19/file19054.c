// fichero 19054 -- macros y constantes -- MODIFICADO
#define LIMITE_19054 19254
#define FACTOR_19054 6

int aplicar_limite19054(int valor) {
    if (valor > LIMITE_19054) return LIMITE_19054;
    return valor * FACTOR_19054;
}
