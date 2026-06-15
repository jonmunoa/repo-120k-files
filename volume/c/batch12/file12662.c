// fichero 12662 -- macros y constantes -- MODIFICADO
#define LIMITE_12662 12862
#define FACTOR_12662 4

int aplicar_limite12662(int valor) {
    if (valor > LIMITE_12662) return LIMITE_12662;
    return valor * FACTOR_12662;
}
