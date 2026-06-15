// fichero 23106 -- macros y constantes -- MODIFICADO
#define LIMITE_23106 23306
#define FACTOR_23106 3

int aplicar_limite23106(int valor) {
    if (valor > LIMITE_23106) return LIMITE_23106;
    return valor * FACTOR_23106;
}
