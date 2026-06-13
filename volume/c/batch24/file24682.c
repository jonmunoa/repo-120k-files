// fichero 24682 -- macros y constantes
#define LIMITE_24682 24782
#define FACTOR_24682 3

int aplicar_limite24682(int valor) {
    if (valor > LIMITE_24682) return LIMITE_24682;
    return valor * FACTOR_24682;
}
