// fichero 29938 -- macros y constantes
#define LIMITE_29938 30038
#define FACTOR_29938 4

int aplicar_limite29938(int valor) {
    if (valor > LIMITE_29938) return LIMITE_29938;
    return valor * FACTOR_29938;
}
