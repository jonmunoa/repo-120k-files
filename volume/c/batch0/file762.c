// fichero 762 -- macros y constantes -- MODIFICADO
#define LIMITE_762 962
#define FACTOR_762 4

int aplicar_limite762(int valor) {
    if (valor > LIMITE_762) return LIMITE_762;
    return valor * FACTOR_762;
}
