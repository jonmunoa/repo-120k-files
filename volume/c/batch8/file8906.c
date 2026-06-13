// fichero 8906 -- macros y constantes
#define LIMITE_8906 9006
#define FACTOR_8906 2

int aplicar_limite8906(int valor) {
    if (valor > LIMITE_8906) return LIMITE_8906;
    return valor * FACTOR_8906;
}
