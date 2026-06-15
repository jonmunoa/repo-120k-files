// fichero 42562 -- macros y constantes -- MODIFICADO
#define LIMITE_42562 42762
#define FACTOR_42562 4

int aplicar_limite42562(int valor) {
    if (valor > LIMITE_42562) return LIMITE_42562;
    return valor * FACTOR_42562;
}
