// fichero 32806 -- macros y constantes -- MODIFICADO
#define LIMITE_32806 33006
#define FACTOR_32806 3

int aplicar_limite32806(int valor) {
    if (valor > LIMITE_32806) return LIMITE_32806;
    return valor * FACTOR_32806;
}
