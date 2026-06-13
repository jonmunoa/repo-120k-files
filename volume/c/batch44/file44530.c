// fichero 44530 -- macros y constantes
#define LIMITE_44530 44630
#define FACTOR_44530 1

int aplicar_limite44530(int valor) {
    if (valor > LIMITE_44530) return LIMITE_44530;
    return valor * FACTOR_44530;
}
