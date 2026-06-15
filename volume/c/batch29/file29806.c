// fichero 29806 -- macros y constantes -- MODIFICADO
#define LIMITE_29806 30006
#define FACTOR_29806 3

int aplicar_limite29806(int valor) {
    if (valor > LIMITE_29806) return LIMITE_29806;
    return valor * FACTOR_29806;
}
