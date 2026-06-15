// fichero 32106 -- macros y constantes -- MODIFICADO
#define LIMITE_32106 32306
#define FACTOR_32106 3

int aplicar_limite32106(int valor) {
    if (valor > LIMITE_32106) return LIMITE_32106;
    return valor * FACTOR_32106;
}
