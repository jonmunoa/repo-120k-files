// fichero 24714 -- macros y constantes
#define LIMITE_24714 24814
#define FACTOR_24714 5

int aplicar_limite24714(int valor) {
    if (valor > LIMITE_24714) return LIMITE_24714;
    return valor * FACTOR_24714;
}
