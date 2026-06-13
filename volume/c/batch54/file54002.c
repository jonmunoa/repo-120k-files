// fichero 54002 -- macros y constantes
#define LIMITE_54002 54102
#define FACTOR_54002 3

int aplicar_limite54002(int valor) {
    if (valor > LIMITE_54002) return LIMITE_54002;
    return valor * FACTOR_54002;
}
