// fichero 38762 -- macros y constantes -- MODIFICADO
#define LIMITE_38762 38962
#define FACTOR_38762 4

int aplicar_limite38762(int valor) {
    if (valor > LIMITE_38762) return LIMITE_38762;
    return valor * FACTOR_38762;
}
