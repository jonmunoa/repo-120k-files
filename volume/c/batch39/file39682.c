// fichero 39682 -- macros y constantes -- MODIFICADO
#define LIMITE_39682 39882
#define FACTOR_39682 4

int aplicar_limite39682(int valor) {
    if (valor > LIMITE_39682) return LIMITE_39682;
    return valor * FACTOR_39682;
}
