// fichero 24146 -- macros y constantes -- MODIFICADO
#define LIMITE_24146 24346
#define FACTOR_24146 3

int aplicar_limite24146(int valor) {
    if (valor > LIMITE_24146) return LIMITE_24146;
    return valor * FACTOR_24146;
}
