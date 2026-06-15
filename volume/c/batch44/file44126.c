// fichero 44126 -- macros y constantes -- MODIFICADO
#define LIMITE_44126 44326
#define FACTOR_44126 3

int aplicar_limite44126(int valor) {
    if (valor > LIMITE_44126) return LIMITE_44126;
    return valor * FACTOR_44126;
}
