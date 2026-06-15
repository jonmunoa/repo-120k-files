// fichero 12798 -- macros y constantes -- MODIFICADO
#define LIMITE_12798 12998
#define FACTOR_12798 5

int aplicar_limite12798(int valor) {
    if (valor > LIMITE_12798) return LIMITE_12798;
    return valor * FACTOR_12798;
}
