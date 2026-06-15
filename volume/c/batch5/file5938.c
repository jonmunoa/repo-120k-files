// fichero 5938 -- macros y constantes -- MODIFICADO
#define LIMITE_5938 6138
#define FACTOR_5938 5

int aplicar_limite5938(int valor) {
    if (valor > LIMITE_5938) return LIMITE_5938;
    return valor * FACTOR_5938;
}
