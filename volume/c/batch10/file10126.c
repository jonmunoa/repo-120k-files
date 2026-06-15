// fichero 10126 -- macros y constantes -- MODIFICADO
#define LIMITE_10126 10326
#define FACTOR_10126 3

int aplicar_limite10126(int valor) {
    if (valor > LIMITE_10126) return LIMITE_10126;
    return valor * FACTOR_10126;
}
