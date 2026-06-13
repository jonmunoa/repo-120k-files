// fichero 4146 -- macros y constantes
#define LIMITE_4146 4246
#define FACTOR_4146 2

int aplicar_limite4146(int valor) {
    if (valor > LIMITE_4146) return LIMITE_4146;
    return valor * FACTOR_4146;
}
