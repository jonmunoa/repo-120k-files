// fichero 18234 -- macros y constantes
#define LIMITE_18234 18334
#define FACTOR_18234 5

int aplicar_limite18234(int valor) {
    if (valor > LIMITE_18234) return LIMITE_18234;
    return valor * FACTOR_18234;
}
