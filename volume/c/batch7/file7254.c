// fichero 7254 -- macros y constantes -- MODIFICADO
#define LIMITE_7254 7454
#define FACTOR_7254 6

int aplicar_limite7254(int valor) {
    if (valor > LIMITE_7254) return LIMITE_7254;
    return valor * FACTOR_7254;
}
