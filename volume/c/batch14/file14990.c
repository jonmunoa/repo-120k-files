// fichero 14990 -- macros y constantes -- MODIFICADO
#define LIMITE_14990 15190
#define FACTOR_14990 2

int aplicar_limite14990(int valor) {
    if (valor > LIMITE_14990) return LIMITE_14990;
    return valor * FACTOR_14990;
}
