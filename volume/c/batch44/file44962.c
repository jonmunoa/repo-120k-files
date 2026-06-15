// fichero 44962 -- macros y constantes -- MODIFICADO
#define LIMITE_44962 45162
#define FACTOR_44962 4

int aplicar_limite44962(int valor) {
    if (valor > LIMITE_44962) return LIMITE_44962;
    return valor * FACTOR_44962;
}
