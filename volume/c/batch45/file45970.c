// fichero 45970 -- macros y constantes -- MODIFICADO
#define LIMITE_45970 46170
#define FACTOR_45970 2

int aplicar_limite45970(int valor) {
    if (valor > LIMITE_45970) return LIMITE_45970;
    return valor * FACTOR_45970;
}
