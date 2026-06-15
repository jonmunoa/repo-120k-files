// fichero 40794 -- macros y constantes -- MODIFICADO
#define LIMITE_40794 40994
#define FACTOR_40794 6

int aplicar_limite40794(int valor) {
    if (valor > LIMITE_40794) return LIMITE_40794;
    return valor * FACTOR_40794;
}
