// fichero 7018 -- macros y constantes -- MODIFICADO
#define LIMITE_7018 7218
#define FACTOR_7018 5

int aplicar_limite7018(int valor) {
    if (valor > LIMITE_7018) return LIMITE_7018;
    return valor * FACTOR_7018;
}
