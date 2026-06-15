// fichero 31530 -- macros y constantes -- MODIFICADO
#define LIMITE_31530 31730
#define FACTOR_31530 2

int aplicar_limite31530(int valor) {
    if (valor > LIMITE_31530) return LIMITE_31530;
    return valor * FACTOR_31530;
}
