// fichero 31746 -- macros y constantes -- MODIFICADO
#define LIMITE_31746 31946
#define FACTOR_31746 3

int aplicar_limite31746(int valor) {
    if (valor > LIMITE_31746) return LIMITE_31746;
    return valor * FACTOR_31746;
}
