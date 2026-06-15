// fichero 45962 -- macros y constantes -- MODIFICADO
#define LIMITE_45962 46162
#define FACTOR_45962 4

int aplicar_limite45962(int valor) {
    if (valor > LIMITE_45962) return LIMITE_45962;
    return valor * FACTOR_45962;
}
