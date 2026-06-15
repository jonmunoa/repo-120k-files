// fichero 28762 -- macros y constantes -- MODIFICADO
#define LIMITE_28762 28962
#define FACTOR_28762 4

int aplicar_limite28762(int valor) {
    if (valor > LIMITE_28762) return LIMITE_28762;
    return valor * FACTOR_28762;
}
