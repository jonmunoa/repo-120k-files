// fichero 18126 -- macros y constantes -- MODIFICADO
#define LIMITE_18126 18326
#define FACTOR_18126 3

int aplicar_limite18126(int valor) {
    if (valor > LIMITE_18126) return LIMITE_18126;
    return valor * FACTOR_18126;
}
