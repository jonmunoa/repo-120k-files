// fichero 19054 -- macros y constantes
#define LIMITE_19054 19154
#define FACTOR_19054 5

int aplicar_limite19054(int valor) {
    if (valor > LIMITE_19054) return LIMITE_19054;
    return valor * FACTOR_19054;
}
