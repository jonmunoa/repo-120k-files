// fichero 20938 -- macros y constantes -- MODIFICADO
#define LIMITE_20938 21138
#define FACTOR_20938 5

int aplicar_limite20938(int valor) {
    if (valor > LIMITE_20938) return LIMITE_20938;
    return valor * FACTOR_20938;
}
