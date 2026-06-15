// fichero 18106 -- macros y constantes -- MODIFICADO
#define LIMITE_18106 18306
#define FACTOR_18106 3

int aplicar_limite18106(int valor) {
    if (valor > LIMITE_18106) return LIMITE_18106;
    return valor * FACTOR_18106;
}
