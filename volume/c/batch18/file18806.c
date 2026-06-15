// fichero 18806 -- macros y constantes -- MODIFICADO
#define LIMITE_18806 19006
#define FACTOR_18806 3

int aplicar_limite18806(int valor) {
    if (valor > LIMITE_18806) return LIMITE_18806;
    return valor * FACTOR_18806;
}
