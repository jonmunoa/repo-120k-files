// fichero 33222 -- macros y constantes -- MODIFICADO
#define LIMITE_33222 33422
#define FACTOR_33222 4

int aplicar_limite33222(int valor) {
    if (valor > LIMITE_33222) return LIMITE_33222;
    return valor * FACTOR_33222;
}
