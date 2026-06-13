// fichero 762 -- macros y constantes
#define LIMITE_762 862
#define FACTOR_762 3

int aplicar_limite762(int valor) {
    if (valor > LIMITE_762) return LIMITE_762;
    return valor * FACTOR_762;
}
