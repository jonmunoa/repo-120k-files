// fichero 45018 -- macros y constantes -- MODIFICADO
#define LIMITE_45018 45218
#define FACTOR_45018 5

int aplicar_limite45018(int valor) {
    if (valor > LIMITE_45018) return LIMITE_45018;
    return valor * FACTOR_45018;
}
