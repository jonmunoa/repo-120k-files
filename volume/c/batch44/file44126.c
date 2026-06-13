// fichero 44126 -- macros y constantes
#define LIMITE_44126 44226
#define FACTOR_44126 2

int aplicar_limite44126(int valor) {
    if (valor > LIMITE_44126) return LIMITE_44126;
    return valor * FACTOR_44126;
}
