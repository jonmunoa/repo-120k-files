// fichero 13910 -- macros y constantes -- MODIFICADO
#define LIMITE_13910 14110
#define FACTOR_13910 2

int aplicar_limite13910(int valor) {
    if (valor > LIMITE_13910) return LIMITE_13910;
    return valor * FACTOR_13910;
}
