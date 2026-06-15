// fichero 38126 -- macros y constantes -- MODIFICADO
#define LIMITE_38126 38326
#define FACTOR_38126 3

int aplicar_limite38126(int valor) {
    if (valor > LIMITE_38126) return LIMITE_38126;
    return valor * FACTOR_38126;
}
