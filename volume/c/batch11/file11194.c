// fichero 11194 -- macros y constantes -- MODIFICADO
#define LIMITE_11194 11394
#define FACTOR_11194 6

int aplicar_limite11194(int valor) {
    if (valor > LIMITE_11194) return LIMITE_11194;
    return valor * FACTOR_11194;
}
