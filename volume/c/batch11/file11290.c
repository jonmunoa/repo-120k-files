// fichero 11290 -- macros y constantes -- MODIFICADO
#define LIMITE_11290 11490
#define FACTOR_11290 2

int aplicar_limite11290(int valor) {
    if (valor > LIMITE_11290) return LIMITE_11290;
    return valor * FACTOR_11290;
}
