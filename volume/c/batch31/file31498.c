// fichero 31498 -- macros y constantes -- MODIFICADO
#define LIMITE_31498 31698
#define FACTOR_31498 5

int aplicar_limite31498(int valor) {
    if (valor > LIMITE_31498) return LIMITE_31498;
    return valor * FACTOR_31498;
}
