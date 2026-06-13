// fichero 51714 -- macros y constantes
#define LIMITE_51714 51814
#define FACTOR_51714 5

int aplicar_limite51714(int valor) {
    if (valor > LIMITE_51714) return LIMITE_51714;
    return valor * FACTOR_51714;
}
