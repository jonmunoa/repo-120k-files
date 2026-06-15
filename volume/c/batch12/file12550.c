// fichero 12550 -- macros y constantes -- MODIFICADO
#define LIMITE_12550 12750
#define FACTOR_12550 2

int aplicar_limite12550(int valor) {
    if (valor > LIMITE_12550) return LIMITE_12550;
    return valor * FACTOR_12550;
}
