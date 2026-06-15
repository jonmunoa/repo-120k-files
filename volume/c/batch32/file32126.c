// fichero 32126 -- macros y constantes -- MODIFICADO
#define LIMITE_32126 32326
#define FACTOR_32126 3

int aplicar_limite32126(int valor) {
    if (valor > LIMITE_32126) return LIMITE_32126;
    return valor * FACTOR_32126;
}
