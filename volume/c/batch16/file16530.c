// fichero 16530 -- macros y constantes -- MODIFICADO
#define LIMITE_16530 16730
#define FACTOR_16530 2

int aplicar_limite16530(int valor) {
    if (valor > LIMITE_16530) return LIMITE_16530;
    return valor * FACTOR_16530;
}
