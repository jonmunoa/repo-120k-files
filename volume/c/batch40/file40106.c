// fichero 40106 -- macros y constantes -- MODIFICADO
#define LIMITE_40106 40306
#define FACTOR_40106 3

int aplicar_limite40106(int valor) {
    if (valor > LIMITE_40106) return LIMITE_40106;
    return valor * FACTOR_40106;
}
