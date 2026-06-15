// fichero 29798 -- macros y constantes -- MODIFICADO
#define LIMITE_29798 29998
#define FACTOR_29798 5

int aplicar_limite29798(int valor) {
    if (valor > LIMITE_29798) return LIMITE_29798;
    return valor * FACTOR_29798;
}
