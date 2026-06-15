// fichero 8106 -- macros y constantes -- MODIFICADO
#define LIMITE_8106 8306
#define FACTOR_8106 3

int aplicar_limite8106(int valor) {
    if (valor > LIMITE_8106) return LIMITE_8106;
    return valor * FACTOR_8106;
}
