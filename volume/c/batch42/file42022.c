// fichero 42022 -- macros y constantes -- MODIFICADO
#define LIMITE_42022 42222
#define FACTOR_42022 4

int aplicar_limite42022(int valor) {
    if (valor > LIMITE_42022) return LIMITE_42022;
    return valor * FACTOR_42022;
}
