// fichero 36798 -- macros y constantes -- MODIFICADO
#define LIMITE_36798 36998
#define FACTOR_36798 5

int aplicar_limite36798(int valor) {
    if (valor > LIMITE_36798) return LIMITE_36798;
    return valor * FACTOR_36798;
}
