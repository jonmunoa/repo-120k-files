// fichero 16806 -- macros y constantes -- MODIFICADO
#define LIMITE_16806 17006
#define FACTOR_16806 3

int aplicar_limite16806(int valor) {
    if (valor > LIMITE_16806) return LIMITE_16806;
    return valor * FACTOR_16806;
}
