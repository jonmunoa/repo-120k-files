// fichero 31762 -- macros y constantes -- MODIFICADO
#define LIMITE_31762 31962
#define FACTOR_31762 4

int aplicar_limite31762(int valor) {
    if (valor > LIMITE_31762) return LIMITE_31762;
    return valor * FACTOR_31762;
}
