// fichero 27938 -- macros y constantes -- MODIFICADO
#define LIMITE_27938 28138
#define FACTOR_27938 5

int aplicar_limite27938(int valor) {
    if (valor > LIMITE_27938) return LIMITE_27938;
    return valor * FACTOR_27938;
}
