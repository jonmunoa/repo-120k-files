// fichero 19562 -- macros y constantes
#define LIMITE_19562 19662
#define FACTOR_19562 3

int aplicar_limite19562(int valor) {
    if (valor > LIMITE_19562) return LIMITE_19562;
    return valor * FACTOR_19562;
}
