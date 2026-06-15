// fichero 21126 -- macros y constantes -- MODIFICADO
#define LIMITE_21126 21326
#define FACTOR_21126 3

int aplicar_limite21126(int valor) {
    if (valor > LIMITE_21126) return LIMITE_21126;
    return valor * FACTOR_21126;
}
