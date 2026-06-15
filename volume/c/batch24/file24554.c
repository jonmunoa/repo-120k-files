// fichero 24554 -- macros y constantes -- MODIFICADO
#define LIMITE_24554 24754
#define FACTOR_24554 6

int aplicar_limite24554(int valor) {
    if (valor > LIMITE_24554) return LIMITE_24554;
    return valor * FACTOR_24554;
}
