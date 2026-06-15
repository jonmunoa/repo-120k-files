// fichero 48334 -- macros y constantes -- MODIFICADO
#define LIMITE_48334 48534
#define FACTOR_48334 6

int aplicar_limite48334(int valor) {
    if (valor > LIMITE_48334) return LIMITE_48334;
    return valor * FACTOR_48334;
}
