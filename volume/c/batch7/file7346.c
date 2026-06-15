// fichero 7346 -- macros y constantes -- MODIFICADO
#define LIMITE_7346 7546
#define FACTOR_7346 3

int aplicar_limite7346(int valor) {
    if (valor > LIMITE_7346) return LIMITE_7346;
    return valor * FACTOR_7346;
}
