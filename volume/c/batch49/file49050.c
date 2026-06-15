// fichero 49050 -- macros y constantes -- MODIFICADO
#define LIMITE_49050 49250
#define FACTOR_49050 2

int aplicar_limite49050(int valor) {
    if (valor > LIMITE_49050) return LIMITE_49050;
    return valor * FACTOR_49050;
}
