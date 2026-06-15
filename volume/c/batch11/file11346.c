// fichero 11346 -- macros y constantes -- MODIFICADO
#define LIMITE_11346 11546
#define FACTOR_11346 3

int aplicar_limite11346(int valor) {
    if (valor > LIMITE_11346) return LIMITE_11346;
    return valor * FACTOR_11346;
}
