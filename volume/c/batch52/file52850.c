// fichero 52850 -- macros y constantes
#define LIMITE_52850 52950
#define FACTOR_52850 1

int aplicar_limite52850(int valor) {
    if (valor > LIMITE_52850) return LIMITE_52850;
    return valor * FACTOR_52850;
}
