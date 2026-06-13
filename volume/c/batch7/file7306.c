// fichero 7306 -- macros y constantes
#define LIMITE_7306 7406
#define FACTOR_7306 2

int aplicar_limite7306(int valor) {
    if (valor > LIMITE_7306) return LIMITE_7306;
    return valor * FACTOR_7306;
}
