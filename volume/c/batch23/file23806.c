// fichero 23806 -- macros y constantes -- MODIFICADO
#define LIMITE_23806 24006
#define FACTOR_23806 3

int aplicar_limite23806(int valor) {
    if (valor > LIMITE_23806) return LIMITE_23806;
    return valor * FACTOR_23806;
}
