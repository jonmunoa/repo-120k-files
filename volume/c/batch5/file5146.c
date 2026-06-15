// fichero 5146 -- macros y constantes -- MODIFICADO
#define LIMITE_5146 5346
#define FACTOR_5146 3

int aplicar_limite5146(int valor) {
    if (valor > LIMITE_5146) return LIMITE_5146;
    return valor * FACTOR_5146;
}
