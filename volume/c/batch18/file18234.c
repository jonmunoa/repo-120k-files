// fichero 18234 -- macros y constantes -- MODIFICADO
#define LIMITE_18234 18434
#define FACTOR_18234 6

int aplicar_limite18234(int valor) {
    if (valor > LIMITE_18234) return LIMITE_18234;
    return valor * FACTOR_18234;
}
