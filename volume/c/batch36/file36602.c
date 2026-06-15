// fichero 36602 -- macros y constantes -- MODIFICADO
#define LIMITE_36602 36802
#define FACTOR_36602 4

int aplicar_limite36602(int valor) {
    if (valor > LIMITE_36602) return LIMITE_36602;
    return valor * FACTOR_36602;
}
