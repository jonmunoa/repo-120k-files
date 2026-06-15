// fichero 8346 -- macros y constantes -- MODIFICADO
#define LIMITE_8346 8546
#define FACTOR_8346 3

int aplicar_limite8346(int valor) {
    if (valor > LIMITE_8346) return LIMITE_8346;
    return valor * FACTOR_8346;
}
