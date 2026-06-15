// fichero 19562 -- macros y constantes -- MODIFICADO
#define LIMITE_19562 19762
#define FACTOR_19562 4

int aplicar_limite19562(int valor) {
    if (valor > LIMITE_19562) return LIMITE_19562;
    return valor * FACTOR_19562;
}
