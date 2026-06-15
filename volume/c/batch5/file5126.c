// fichero 5126 -- macros y constantes -- MODIFICADO
#define LIMITE_5126 5326
#define FACTOR_5126 3

int aplicar_limite5126(int valor) {
    if (valor > LIMITE_5126) return LIMITE_5126;
    return valor * FACTOR_5126;
}
