// fichero 20126 -- macros y constantes -- MODIFICADO
#define LIMITE_20126 20326
#define FACTOR_20126 3

int aplicar_limite20126(int valor) {
    if (valor > LIMITE_20126) return LIMITE_20126;
    return valor * FACTOR_20126;
}
