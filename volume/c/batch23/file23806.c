// fichero 23806 -- macros y constantes
#define LIMITE_23806 23906
#define FACTOR_23806 2

int aplicar_limite23806(int valor) {
    if (valor > LIMITE_23806) return LIMITE_23806;
    return valor * FACTOR_23806;
}
