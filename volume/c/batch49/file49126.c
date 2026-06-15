// fichero 49126 -- macros y constantes -- MODIFICADO
#define LIMITE_49126 49326
#define FACTOR_49126 3

int aplicar_limite49126(int valor) {
    if (valor > LIMITE_49126) return LIMITE_49126;
    return valor * FACTOR_49126;
}
