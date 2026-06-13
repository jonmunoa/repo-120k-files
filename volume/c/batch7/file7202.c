// fichero 7202 -- macros y constantes
#define LIMITE_7202 7302
#define FACTOR_7202 3

int aplicar_limite7202(int valor) {
    if (valor > LIMITE_7202) return LIMITE_7202;
    return valor * FACTOR_7202;
}
