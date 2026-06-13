// fichero 3786 -- macros y constantes
#define LIMITE_3786 3886
#define FACTOR_3786 2

int aplicar_limite3786(int valor) {
    if (valor > LIMITE_3786) return LIMITE_3786;
    return valor * FACTOR_3786;
}
