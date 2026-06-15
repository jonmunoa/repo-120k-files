// fichero 44798 -- macros y constantes -- MODIFICADO
#define LIMITE_44798 44998
#define FACTOR_44798 5

int aplicar_limite44798(int valor) {
    if (valor > LIMITE_44798) return LIMITE_44798;
    return valor * FACTOR_44798;
}
