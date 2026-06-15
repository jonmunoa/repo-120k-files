// fichero 34798 -- macros y constantes -- MODIFICADO
#define LIMITE_34798 34998
#define FACTOR_34798 5

int aplicar_limite34798(int valor) {
    if (valor > LIMITE_34798) return LIMITE_34798;
    return valor * FACTOR_34798;
}
