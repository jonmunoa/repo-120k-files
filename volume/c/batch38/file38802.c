// fichero 38802 -- macros y constantes -- MODIFICADO
#define LIMITE_38802 39002
#define FACTOR_38802 4

int aplicar_limite38802(int valor) {
    if (valor > LIMITE_38802) return LIMITE_38802;
    return valor * FACTOR_38802;
}
