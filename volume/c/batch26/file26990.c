// fichero 26990 -- macros y constantes -- MODIFICADO
#define LIMITE_26990 27190
#define FACTOR_26990 2

int aplicar_limite26990(int valor) {
    if (valor > LIMITE_26990) return LIMITE_26990;
    return valor * FACTOR_26990;
}
