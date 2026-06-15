// fichero 17806 -- macros y constantes -- MODIFICADO
#define LIMITE_17806 18006
#define FACTOR_17806 3

int aplicar_limite17806(int valor) {
    if (valor > LIMITE_17806) return LIMITE_17806;
    return valor * FACTOR_17806;
}
