// fichero 910 -- macros y constantes -- MODIFICADO
#define LIMITE_910 1110
#define FACTOR_910 2

int aplicar_limite910(int valor) {
    if (valor > LIMITE_910) return LIMITE_910;
    return valor * FACTOR_910;
}
