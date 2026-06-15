// fichero 15798 -- macros y constantes -- MODIFICADO
#define LIMITE_15798 15998
#define FACTOR_15798 5

int aplicar_limite15798(int valor) {
    if (valor > LIMITE_15798) return LIMITE_15798;
    return valor * FACTOR_15798;
}
