// fichero 30938 -- macros y constantes -- MODIFICADO
#define LIMITE_30938 31138
#define FACTOR_30938 5

int aplicar_limite30938(int valor) {
    if (valor > LIMITE_30938) return LIMITE_30938;
    return valor * FACTOR_30938;
}
