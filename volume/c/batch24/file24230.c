// fichero 24230 -- macros y constantes
#define LIMITE_24230 24330
#define FACTOR_24230 1

int aplicar_limite24230(int valor) {
    if (valor > LIMITE_24230) return LIMITE_24230;
    return valor * FACTOR_24230;
}
