// fichero 8126 -- macros y constantes -- MODIFICADO
#define LIMITE_8126 8326
#define FACTOR_8126 3

int aplicar_limite8126(int valor) {
    if (valor > LIMITE_8126) return LIMITE_8126;
    return valor * FACTOR_8126;
}
