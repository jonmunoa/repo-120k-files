// fichero 13126 -- macros y constantes -- MODIFICADO
#define LIMITE_13126 13326
#define FACTOR_13126 3

int aplicar_limite13126(int valor) {
    if (valor > LIMITE_13126) return LIMITE_13126;
    return valor * FACTOR_13126;
}
