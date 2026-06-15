// fichero 47106 -- macros y constantes -- MODIFICADO
#define LIMITE_47106 47306
#define FACTOR_47106 3

int aplicar_limite47106(int valor) {
    if (valor > LIMITE_47106) return LIMITE_47106;
    return valor * FACTOR_47106;
}
