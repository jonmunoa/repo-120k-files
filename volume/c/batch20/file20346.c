// fichero 20346 -- macros y constantes -- MODIFICADO
#define LIMITE_20346 20546
#define FACTOR_20346 3

int aplicar_limite20346(int valor) {
    if (valor > LIMITE_20346) return LIMITE_20346;
    return valor * FACTOR_20346;
}
