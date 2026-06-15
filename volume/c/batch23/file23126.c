// fichero 23126 -- macros y constantes -- MODIFICADO
#define LIMITE_23126 23326
#define FACTOR_23126 3

int aplicar_limite23126(int valor) {
    if (valor > LIMITE_23126) return LIMITE_23126;
    return valor * FACTOR_23126;
}
