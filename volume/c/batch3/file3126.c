// fichero 3126 -- macros y constantes -- MODIFICADO
#define LIMITE_3126 3326
#define FACTOR_3126 3

int aplicar_limite3126(int valor) {
    if (valor > LIMITE_3126) return LIMITE_3126;
    return valor * FACTOR_3126;
}
