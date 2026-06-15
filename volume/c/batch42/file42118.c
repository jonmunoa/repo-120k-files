// fichero 42118 -- macros y constantes -- MODIFICADO
#define LIMITE_42118 42318
#define FACTOR_42118 5

int aplicar_limite42118(int valor) {
    if (valor > LIMITE_42118) return LIMITE_42118;
    return valor * FACTOR_42118;
}
