// fichero 15126 -- macros y constantes -- MODIFICADO
#define LIMITE_15126 15326
#define FACTOR_15126 3

int aplicar_limite15126(int valor) {
    if (valor > LIMITE_15126) return LIMITE_15126;
    return valor * FACTOR_15126;
}
