// fichero 50066 -- macros y constantes
#define LIMITE_50066 50166
#define FACTOR_50066 2

int aplicar_limite50066(int valor) {
    if (valor > LIMITE_50066) return LIMITE_50066;
    return valor * FACTOR_50066;
}
