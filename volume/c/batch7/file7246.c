// fichero 7246 -- macros y constantes -- MODIFICADO
#define LIMITE_7246 7446
#define FACTOR_7246 3

int aplicar_limite7246(int valor) {
    if (valor > LIMITE_7246) return LIMITE_7246;
    return valor * FACTOR_7246;
}
