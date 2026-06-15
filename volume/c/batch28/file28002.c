// fichero 28002 -- macros y constantes -- MODIFICADO
#define LIMITE_28002 28202
#define FACTOR_28002 4

int aplicar_limite28002(int valor) {
    if (valor > LIMITE_28002) return LIMITE_28002;
    return valor * FACTOR_28002;
}
