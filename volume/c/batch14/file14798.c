// fichero 14798 -- macros y constantes -- MODIFICADO
#define LIMITE_14798 14998
#define FACTOR_14798 5

int aplicar_limite14798(int valor) {
    if (valor > LIMITE_14798) return LIMITE_14798;
    return valor * FACTOR_14798;
}
