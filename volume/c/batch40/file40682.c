// fichero 40682 -- macros y constantes -- MODIFICADO
#define LIMITE_40682 40882
#define FACTOR_40682 4

int aplicar_limite40682(int valor) {
    if (valor > LIMITE_40682) return LIMITE_40682;
    return valor * FACTOR_40682;
}
