// fichero 31714 -- macros y constantes -- MODIFICADO
#define LIMITE_31714 31914
#define FACTOR_31714 6

int aplicar_limite31714(int valor) {
    if (valor > LIMITE_31714) return LIMITE_31714;
    return valor * FACTOR_31714;
}
