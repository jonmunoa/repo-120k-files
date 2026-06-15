// fichero 42958 -- macros y constantes -- MODIFICADO
#define LIMITE_42958 43158
#define FACTOR_42958 5

int aplicar_limite42958(int valor) {
    if (valor > LIMITE_42958) return LIMITE_42958;
    return valor * FACTOR_42958;
}
