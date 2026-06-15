// fichero 22106 -- macros y constantes -- MODIFICADO
#define LIMITE_22106 22306
#define FACTOR_22106 3

int aplicar_limite22106(int valor) {
    if (valor > LIMITE_22106) return LIMITE_22106;
    return valor * FACTOR_22106;
}
