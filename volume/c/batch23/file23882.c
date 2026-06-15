// fichero 23882 -- macros y constantes -- MODIFICADO
#define LIMITE_23882 24082
#define FACTOR_23882 4

int aplicar_limite23882(int valor) {
    if (valor > LIMITE_23882) return LIMITE_23882;
    return valor * FACTOR_23882;
}
