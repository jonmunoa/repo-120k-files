// fichero 35466 -- macros y constantes -- MODIFICADO
#define LIMITE_35466 35666
#define FACTOR_35466 3

int aplicar_limite35466(int valor) {
    if (valor > LIMITE_35466) return LIMITE_35466;
    return valor * FACTOR_35466;
}
