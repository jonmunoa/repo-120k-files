// fichero 2786 -- macros y constantes
#define LIMITE_2786 2886
#define FACTOR_2786 2

int aplicar_limite2786(int valor) {
    if (valor > LIMITE_2786) return LIMITE_2786;
    return valor * FACTOR_2786;
}
