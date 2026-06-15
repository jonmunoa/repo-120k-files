// fichero 34126 -- macros y constantes -- MODIFICADO
#define LIMITE_34126 34326
#define FACTOR_34126 3

int aplicar_limite34126(int valor) {
    if (valor > LIMITE_34126) return LIMITE_34126;
    return valor * FACTOR_34126;
}
