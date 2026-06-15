// fichero 17126 -- macros y constantes -- MODIFICADO
#define LIMITE_17126 17326
#define FACTOR_17126 3

int aplicar_limite17126(int valor) {
    if (valor > LIMITE_17126) return LIMITE_17126;
    return valor * FACTOR_17126;
}
