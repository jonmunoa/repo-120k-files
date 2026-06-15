// fichero 28102 -- macros y constantes -- MODIFICADO
#define LIMITE_28102 28302
#define FACTOR_28102 4

int aplicar_limite28102(int valor) {
    if (valor > LIMITE_28102) return LIMITE_28102;
    return valor * FACTOR_28102;
}
