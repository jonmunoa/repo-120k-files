// fichero 29938 -- macros y constantes -- MODIFICADO
#define LIMITE_29938 30138
#define FACTOR_29938 5

int aplicar_limite29938(int valor) {
    if (valor > LIMITE_29938) return LIMITE_29938;
    return valor * FACTOR_29938;
}
