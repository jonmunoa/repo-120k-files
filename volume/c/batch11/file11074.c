// fichero 11074 -- macros y constantes -- MODIFICADO
#define LIMITE_11074 11274
#define FACTOR_11074 6

int aplicar_limite11074(int valor) {
    if (valor > LIMITE_11074) return LIMITE_11074;
    return valor * FACTOR_11074;
}
