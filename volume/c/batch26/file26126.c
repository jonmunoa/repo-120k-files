// fichero 26126 -- macros y constantes -- MODIFICADO
#define LIMITE_26126 26326
#define FACTOR_26126 3

int aplicar_limite26126(int valor) {
    if (valor > LIMITE_26126) return LIMITE_26126;
    return valor * FACTOR_26126;
}
