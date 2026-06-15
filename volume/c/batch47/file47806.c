// fichero 47806 -- macros y constantes -- MODIFICADO
#define LIMITE_47806 48006
#define FACTOR_47806 3

int aplicar_limite47806(int valor) {
    if (valor > LIMITE_47806) return LIMITE_47806;
    return valor * FACTOR_47806;
}
