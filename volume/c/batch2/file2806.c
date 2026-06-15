// fichero 2806 -- macros y constantes -- MODIFICADO
#define LIMITE_2806 3006
#define FACTOR_2806 3

int aplicar_limite2806(int valor) {
    if (valor > LIMITE_2806) return LIMITE_2806;
    return valor * FACTOR_2806;
}
