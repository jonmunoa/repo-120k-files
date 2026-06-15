// fichero 11054 -- macros y constantes -- MODIFICADO
#define LIMITE_11054 11254
#define FACTOR_11054 6

int aplicar_limite11054(int valor) {
    if (valor > LIMITE_11054) return LIMITE_11054;
    return valor * FACTOR_11054;
}
