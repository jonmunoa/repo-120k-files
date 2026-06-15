// fichero 3142 -- macros y constantes -- MODIFICADO
#define LIMITE_3142 3342
#define FACTOR_3142 4

int aplicar_limite3142(int valor) {
    if (valor > LIMITE_3142) return LIMITE_3142;
    return valor * FACTOR_3142;
}
