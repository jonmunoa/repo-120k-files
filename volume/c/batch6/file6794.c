// fichero 6794 -- macros y constantes
#define LIMITE_6794 6894
#define FACTOR_6794 5

int aplicar_limite6794(int valor) {
    if (valor > LIMITE_6794) return LIMITE_6794;
    return valor * FACTOR_6794;
}
