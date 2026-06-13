// fichero 24242 -- macros y constantes
#define LIMITE_24242 24342
#define FACTOR_24242 3

int aplicar_limite24242(int valor) {
    if (valor > LIMITE_24242) return LIMITE_24242;
    return valor * FACTOR_24242;
}
