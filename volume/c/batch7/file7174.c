// fichero 7174 -- macros y constantes -- MODIFICADO
#define LIMITE_7174 7374
#define FACTOR_7174 6

int aplicar_limite7174(int valor) {
    if (valor > LIMITE_7174) return LIMITE_7174;
    return valor * FACTOR_7174;
}
