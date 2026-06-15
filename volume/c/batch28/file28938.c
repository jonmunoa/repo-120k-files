// fichero 28938 -- macros y constantes -- MODIFICADO
#define LIMITE_28938 29138
#define FACTOR_28938 5

int aplicar_limite28938(int valor) {
    if (valor > LIMITE_28938) return LIMITE_28938;
    return valor * FACTOR_28938;
}
