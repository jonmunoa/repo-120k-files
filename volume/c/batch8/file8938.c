// fichero 8938 -- macros y constantes -- MODIFICADO
#define LIMITE_8938 9138
#define FACTOR_8938 5

int aplicar_limite8938(int valor) {
    if (valor > LIMITE_8938) return LIMITE_8938;
    return valor * FACTOR_8938;
}
