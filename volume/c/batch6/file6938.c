// fichero 6938 -- macros y constantes
#define LIMITE_6938 7038
#define FACTOR_6938 4

int aplicar_limite6938(int valor) {
    if (valor > LIMITE_6938) return LIMITE_6938;
    return valor * FACTOR_6938;
}
