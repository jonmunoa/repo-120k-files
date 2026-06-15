// fichero 18798 -- macros y constantes -- MODIFICADO
#define LIMITE_18798 18998
#define FACTOR_18798 5

int aplicar_limite18798(int valor) {
    if (valor > LIMITE_18798) return LIMITE_18798;
    return valor * FACTOR_18798;
}
