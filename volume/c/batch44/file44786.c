// fichero 44786 -- macros y constantes
#define LIMITE_44786 44886
#define FACTOR_44786 2

int aplicar_limite44786(int valor) {
    if (valor > LIMITE_44786) return LIMITE_44786;
    return valor * FACTOR_44786;
}
