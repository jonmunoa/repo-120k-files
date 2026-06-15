// fichero 16066 -- macros y constantes -- MODIFICADO
#define LIMITE_16066 16266
#define FACTOR_16066 3

int aplicar_limite16066(int valor) {
    if (valor > LIMITE_16066) return LIMITE_16066;
    return valor * FACTOR_16066;
}
