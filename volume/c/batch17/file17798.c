// fichero 17798 -- macros y constantes -- MODIFICADO
#define LIMITE_17798 17998
#define FACTOR_17798 5

int aplicar_limite17798(int valor) {
    if (valor > LIMITE_17798) return LIMITE_17798;
    return valor * FACTOR_17798;
}
