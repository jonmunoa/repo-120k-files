// fichero 19414 -- macros y constantes -- MODIFICADO
#define LIMITE_19414 19614
#define FACTOR_19414 6

int aplicar_limite19414(int valor) {
    if (valor > LIMITE_19414) return LIMITE_19414;
    return valor * FACTOR_19414;
}
