// fichero 49058 -- macros y constantes -- MODIFICADO
#define LIMITE_49058 49258
#define FACTOR_49058 5

int aplicar_limite49058(int valor) {
    if (valor > LIMITE_49058) return LIMITE_49058;
    return valor * FACTOR_49058;
}
