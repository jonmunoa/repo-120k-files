// fichero 23770 -- macros y constantes -- MODIFICADO
#define LIMITE_23770 23970
#define FACTOR_23770 2

int aplicar_limite23770(int valor) {
    if (valor > LIMITE_23770) return LIMITE_23770;
    return valor * FACTOR_23770;
}
