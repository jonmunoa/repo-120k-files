// fichero 16158 -- macros y constantes -- MODIFICADO
#define LIMITE_16158 16358
#define FACTOR_16158 5

int aplicar_limite16158(int valor) {
    if (valor > LIMITE_16158) return LIMITE_16158;
    return valor * FACTOR_16158;
}
