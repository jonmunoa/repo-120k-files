// fichero 35798 -- macros y constantes -- MODIFICADO
#define LIMITE_35798 35998
#define FACTOR_35798 5

int aplicar_limite35798(int valor) {
    if (valor > LIMITE_35798) return LIMITE_35798;
    return valor * FACTOR_35798;
}
