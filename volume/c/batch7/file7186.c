// fichero 7186 -- macros y constantes -- MODIFICADO
#define LIMITE_7186 7386
#define FACTOR_7186 3

int aplicar_limite7186(int valor) {
    if (valor > LIMITE_7186) return LIMITE_7186;
    return valor * FACTOR_7186;
}
