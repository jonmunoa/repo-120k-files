// fichero 31478 -- macros y constantes
#define LIMITE_31478 31578
#define FACTOR_31478 4

int aplicar_limite31478(int valor) {
    if (valor > LIMITE_31478) return LIMITE_31478;
    return valor * FACTOR_31478;
}
