// fichero 7302 -- macros y constantes
#define LIMITE_7302 7402
#define FACTOR_7302 3

int aplicar_limite7302(int valor) {
    if (valor > LIMITE_7302) return LIMITE_7302;
    return valor * FACTOR_7302;
}
