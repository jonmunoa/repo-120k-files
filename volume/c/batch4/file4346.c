// fichero 4346 -- macros y constantes -- MODIFICADO
#define LIMITE_4346 4546
#define FACTOR_4346 3

int aplicar_limite4346(int valor) {
    if (valor > LIMITE_4346) return LIMITE_4346;
    return valor * FACTOR_4346;
}
