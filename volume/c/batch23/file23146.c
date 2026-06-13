// fichero 23146 -- macros y constantes
#define LIMITE_23146 23246
#define FACTOR_23146 2

int aplicar_limite23146(int valor) {
    if (valor > LIMITE_23146) return LIMITE_23146;
    return valor * FACTOR_23146;
}
