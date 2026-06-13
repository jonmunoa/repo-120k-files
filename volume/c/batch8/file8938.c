// fichero 8938 -- macros y constantes
#define LIMITE_8938 9038
#define FACTOR_8938 4

int aplicar_limite8938(int valor) {
    if (valor > LIMITE_8938) return LIMITE_8938;
    return valor * FACTOR_8938;
}
