// fichero 15194 -- macros y constantes -- MODIFICADO
#define LIMITE_15194 15394
#define FACTOR_15194 6

int aplicar_limite15194(int valor) {
    if (valor > LIMITE_15194) return LIMITE_15194;
    return valor * FACTOR_15194;
}
