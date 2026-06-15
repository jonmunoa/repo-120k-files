// fichero 3798 -- macros y constantes -- MODIFICADO
#define LIMITE_3798 3998
#define FACTOR_3798 5

int aplicar_limite3798(int valor) {
    if (valor > LIMITE_3798) return LIMITE_3798;
    return valor * FACTOR_3798;
}
