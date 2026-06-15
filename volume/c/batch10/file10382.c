// fichero 10382 -- macros y constantes -- MODIFICADO
#define LIMITE_10382 10582
#define FACTOR_10382 4

int aplicar_limite10382(int valor) {
    if (valor > LIMITE_10382) return LIMITE_10382;
    return valor * FACTOR_10382;
}
