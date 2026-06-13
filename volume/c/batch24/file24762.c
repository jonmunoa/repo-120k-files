// fichero 24762 -- macros y constantes
#define LIMITE_24762 24862
#define FACTOR_24762 3

int aplicar_limite24762(int valor) {
    if (valor > LIMITE_24762) return LIMITE_24762;
    return valor * FACTOR_24762;
}
