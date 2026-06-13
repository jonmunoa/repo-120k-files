// fichero 29714 -- macros y constantes
#define LIMITE_29714 29814
#define FACTOR_29714 5

int aplicar_limite29714(int valor) {
    if (valor > LIMITE_29714) return LIMITE_29714;
    return valor * FACTOR_29714;
}
