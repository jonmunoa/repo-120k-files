// fichero 17938 -- macros y constantes -- MODIFICADO
#define LIMITE_17938 18138
#define FACTOR_17938 5

int aplicar_limite17938(int valor) {
    if (valor > LIMITE_17938) return LIMITE_17938;
    return valor * FACTOR_17938;
}
