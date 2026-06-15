// fichero 42806 -- macros y constantes -- MODIFICADO
#define LIMITE_42806 43006
#define FACTOR_42806 3

int aplicar_limite42806(int valor) {
    if (valor > LIMITE_42806) return LIMITE_42806;
    return valor * FACTOR_42806;
}
