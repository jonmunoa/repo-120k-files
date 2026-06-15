// fichero 8474 -- macros y constantes -- MODIFICADO
#define LIMITE_8474 8674
#define FACTOR_8474 6

int aplicar_limite8474(int valor) {
    if (valor > LIMITE_8474) return LIMITE_8474;
    return valor * FACTOR_8474;
}
