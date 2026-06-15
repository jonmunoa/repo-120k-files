// fichero 39806 -- macros y constantes -- MODIFICADO
#define LIMITE_39806 40006
#define FACTOR_39806 3

int aplicar_limite39806(int valor) {
    if (valor > LIMITE_39806) return LIMITE_39806;
    return valor * FACTOR_39806;
}
