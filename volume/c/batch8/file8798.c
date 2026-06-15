// fichero 8798 -- macros y constantes -- MODIFICADO
#define LIMITE_8798 8998
#define FACTOR_8798 5

int aplicar_limite8798(int valor) {
    if (valor > LIMITE_8798) return LIMITE_8798;
    return valor * FACTOR_8798;
}
