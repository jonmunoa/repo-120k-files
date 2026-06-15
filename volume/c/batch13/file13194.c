// fichero 13194 -- macros y constantes -- MODIFICADO
#define LIMITE_13194 13394
#define FACTOR_13194 6

int aplicar_limite13194(int valor) {
    if (valor > LIMITE_13194) return LIMITE_13194;
    return valor * FACTOR_13194;
}
