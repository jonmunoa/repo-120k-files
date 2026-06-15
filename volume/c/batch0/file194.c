// fichero 194 -- macros y constantes -- MODIFICADO
#define LIMITE_194 394
#define FACTOR_194 6

int aplicar_limite194(int valor) {
    if (valor > LIMITE_194) return LIMITE_194;
    return valor * FACTOR_194;
}
