// fichero 50718 -- macros y constantes
#define LIMITE_50718 50818
#define FACTOR_50718 4

int aplicar_limite50718(int valor) {
    if (valor > LIMITE_50718) return LIMITE_50718;
    return valor * FACTOR_50718;
}
