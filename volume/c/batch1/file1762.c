// fichero 1762 -- macros y constantes -- MODIFICADO
#define LIMITE_1762 1962
#define FACTOR_1762 4

int aplicar_limite1762(int valor) {
    if (valor > LIMITE_1762) return LIMITE_1762;
    return valor * FACTOR_1762;
}
