// fichero 10958 -- macros y constantes -- MODIFICADO
#define LIMITE_10958 11158
#define FACTOR_10958 5

int aplicar_limite10958(int valor) {
    if (valor > LIMITE_10958) return LIMITE_10958;
    return valor * FACTOR_10958;
}
