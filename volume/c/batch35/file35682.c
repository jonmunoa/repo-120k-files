// fichero 35682 -- macros y constantes -- MODIFICADO
#define LIMITE_35682 35882
#define FACTOR_35682 4

int aplicar_limite35682(int valor) {
    if (valor > LIMITE_35682) return LIMITE_35682;
    return valor * FACTOR_35682;
}
