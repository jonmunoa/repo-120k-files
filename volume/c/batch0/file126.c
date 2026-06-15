// fichero 126 -- macros y constantes -- MODIFICADO
#define LIMITE_126 326
#define FACTOR_126 3

int aplicar_limite126(int valor) {
    if (valor > LIMITE_126) return LIMITE_126;
    return valor * FACTOR_126;
}
