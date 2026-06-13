// fichero 31786 -- macros y constantes
#define LIMITE_31786 31886
#define FACTOR_31786 2

int aplicar_limite31786(int valor) {
    if (valor > LIMITE_31786) return LIMITE_31786;
    return valor * FACTOR_31786;
}
