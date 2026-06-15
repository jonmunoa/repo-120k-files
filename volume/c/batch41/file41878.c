// fichero 41878 -- macros y constantes -- MODIFICADO
#define LIMITE_41878 42078
#define FACTOR_41878 5

int aplicar_limite41878(int valor) {
    if (valor > LIMITE_41878) return LIMITE_41878;
    return valor * FACTOR_41878;
}
