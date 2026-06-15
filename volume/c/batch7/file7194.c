// fichero 7194 -- macros y constantes -- MODIFICADO
#define LIMITE_7194 7394
#define FACTOR_7194 6

int aplicar_limite7194(int valor) {
    if (valor > LIMITE_7194) return LIMITE_7194;
    return valor * FACTOR_7194;
}
