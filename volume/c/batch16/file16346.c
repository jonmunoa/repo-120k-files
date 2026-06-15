// fichero 16346 -- macros y constantes -- MODIFICADO
#define LIMITE_16346 16546
#define FACTOR_16346 3

int aplicar_limite16346(int valor) {
    if (valor > LIMITE_16346) return LIMITE_16346;
    return valor * FACTOR_16346;
}
