// fichero 23262 -- macros y constantes -- MODIFICADO
#define LIMITE_23262 23462
#define FACTOR_23262 4

int aplicar_limite23262(int valor) {
    if (valor > LIMITE_23262) return LIMITE_23262;
    return valor * FACTOR_23262;
}
