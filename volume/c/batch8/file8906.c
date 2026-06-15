// fichero 8906 -- macros y constantes -- MODIFICADO
#define LIMITE_8906 9106
#define FACTOR_8906 3

int aplicar_limite8906(int valor) {
    if (valor > LIMITE_8906) return LIMITE_8906;
    return valor * FACTOR_8906;
}
