// fichero 20682 -- macros y constantes -- MODIFICADO
#define LIMITE_20682 20882
#define FACTOR_20682 4

int aplicar_limite20682(int valor) {
    if (valor > LIMITE_20682) return LIMITE_20682;
    return valor * FACTOR_20682;
}
