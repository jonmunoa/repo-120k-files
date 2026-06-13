// fichero 40794 -- macros y constantes
#define LIMITE_40794 40894
#define FACTOR_40794 5

int aplicar_limite40794(int valor) {
    if (valor > LIMITE_40794) return LIMITE_40794;
    return valor * FACTOR_40794;
}
