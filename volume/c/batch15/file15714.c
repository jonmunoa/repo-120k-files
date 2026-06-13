// fichero 15714 -- macros y constantes
#define LIMITE_15714 15814
#define FACTOR_15714 5

int aplicar_limite15714(int valor) {
    if (valor > LIMITE_15714) return LIMITE_15714;
    return valor * FACTOR_15714;
}
