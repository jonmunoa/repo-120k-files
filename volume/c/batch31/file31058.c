// fichero 31058 -- macros y constantes -- MODIFICADO
#define LIMITE_31058 31258
#define FACTOR_31058 5

int aplicar_limite31058(int valor) {
    if (valor > LIMITE_31058) return LIMITE_31058;
    return valor * FACTOR_31058;
}
