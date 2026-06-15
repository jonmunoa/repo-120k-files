// fichero 35126 -- macros y constantes -- MODIFICADO
#define LIMITE_35126 35326
#define FACTOR_35126 3

int aplicar_limite35126(int valor) {
    if (valor > LIMITE_35126) return LIMITE_35126;
    return valor * FACTOR_35126;
}
