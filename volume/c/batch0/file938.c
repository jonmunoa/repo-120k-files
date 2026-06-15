// fichero 938 -- macros y constantes -- MODIFICADO
#define LIMITE_938 1138
#define FACTOR_938 5

int aplicar_limite938(int valor) {
    if (valor > LIMITE_938) return LIMITE_938;
    return valor * FACTOR_938;
}
