// fichero 17106 -- macros y constantes -- MODIFICADO
#define LIMITE_17106 17306
#define FACTOR_17106 3

int aplicar_limite17106(int valor) {
    if (valor > LIMITE_17106) return LIMITE_17106;
    return valor * FACTOR_17106;
}
