// fichero 7174 -- macros y constantes
#define LIMITE_7174 7274
#define FACTOR_7174 5

int aplicar_limite7174(int valor) {
    if (valor > LIMITE_7174) return LIMITE_7174;
    return valor * FACTOR_7174;
}
