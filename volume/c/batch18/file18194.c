// fichero 18194 -- macros y constantes -- MODIFICADO
#define LIMITE_18194 18394
#define FACTOR_18194 6

int aplicar_limite18194(int valor) {
    if (valor > LIMITE_18194) return LIMITE_18194;
    return valor * FACTOR_18194;
}
