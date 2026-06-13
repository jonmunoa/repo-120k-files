// fichero 40682 -- macros y constantes
#define LIMITE_40682 40782
#define FACTOR_40682 3

int aplicar_limite40682(int valor) {
    if (valor > LIMITE_40682) return LIMITE_40682;
    return valor * FACTOR_40682;
}
