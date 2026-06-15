// fichero 10938 -- macros y constantes -- MODIFICADO
#define LIMITE_10938 11138
#define FACTOR_10938 5

int aplicar_limite10938(int valor) {
    if (valor > LIMITE_10938) return LIMITE_10938;
    return valor * FACTOR_10938;
}
