// fichero 18034 -- macros y constantes -- MODIFICADO
#define LIMITE_18034 18234
#define FACTOR_18034 6

int aplicar_limite18034(int valor) {
    if (valor > LIMITE_18034) return LIMITE_18034;
    return valor * FACTOR_18034;
}
