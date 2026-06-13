// fichero 50146 -- macros y constantes
#define LIMITE_50146 50246
#define FACTOR_50146 2

int aplicar_limite50146(int valor) {
    if (valor > LIMITE_50146) return LIMITE_50146;
    return valor * FACTOR_50146;
}
