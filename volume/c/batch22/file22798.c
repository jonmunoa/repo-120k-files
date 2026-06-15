// fichero 22798 -- macros y constantes -- MODIFICADO
#define LIMITE_22798 22998
#define FACTOR_22798 5

int aplicar_limite22798(int valor) {
    if (valor > LIMITE_22798) return LIMITE_22798;
    return valor * FACTOR_22798;
}
