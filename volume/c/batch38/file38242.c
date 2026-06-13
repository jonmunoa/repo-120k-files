// fichero 38242 -- macros y constantes
#define LIMITE_38242 38342
#define FACTOR_38242 3

int aplicar_limite38242(int valor) {
    if (valor > LIMITE_38242) return LIMITE_38242;
    return valor * FACTOR_38242;
}
