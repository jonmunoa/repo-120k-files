// fichero 11238 -- macros y constantes -- MODIFICADO
#define LIMITE_11238 11438
#define FACTOR_11238 5

int aplicar_limite11238(int valor) {
    if (valor > LIMITE_11238) return LIMITE_11238;
    return valor * FACTOR_11238;
}
