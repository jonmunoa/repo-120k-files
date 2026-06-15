// fichero 44530 -- macros y constantes -- MODIFICADO
#define LIMITE_44530 44730
#define FACTOR_44530 2

int aplicar_limite44530(int valor) {
    if (valor > LIMITE_44530) return LIMITE_44530;
    return valor * FACTOR_44530;
}
