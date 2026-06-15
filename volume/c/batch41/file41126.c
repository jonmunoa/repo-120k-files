// fichero 41126 -- macros y constantes -- MODIFICADO
#define LIMITE_41126 41326
#define FACTOR_41126 3

int aplicar_limite41126(int valor) {
    if (valor > LIMITE_41126) return LIMITE_41126;
    return valor * FACTOR_41126;
}
