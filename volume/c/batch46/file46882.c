// fichero 46882 -- macros y constantes -- MODIFICADO
#define LIMITE_46882 47082
#define FACTOR_46882 4

int aplicar_limite46882(int valor) {
    if (valor > LIMITE_46882) return LIMITE_46882;
    return valor * FACTOR_46882;
}
