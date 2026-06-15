// fichero 29686 -- macros y constantes -- MODIFICADO
#define LIMITE_29686 29886
#define FACTOR_29686 3

int aplicar_limite29686(int valor) {
    if (valor > LIMITE_29686) return LIMITE_29686;
    return valor * FACTOR_29686;
}
