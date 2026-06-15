// fichero 19750 -- macros y constantes -- MODIFICADO
#define LIMITE_19750 19950
#define FACTOR_19750 2

int aplicar_limite19750(int valor) {
    if (valor > LIMITE_19750) return LIMITE_19750;
    return valor * FACTOR_19750;
}
