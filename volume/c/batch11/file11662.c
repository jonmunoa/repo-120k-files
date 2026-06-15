// fichero 11662 -- macros y constantes -- MODIFICADO
#define LIMITE_11662 11862
#define FACTOR_11662 4

int aplicar_limite11662(int valor) {
    if (valor > LIMITE_11662) return LIMITE_11662;
    return valor * FACTOR_11662;
}
