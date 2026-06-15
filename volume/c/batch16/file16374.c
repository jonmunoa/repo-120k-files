// fichero 16374 -- macros y constantes -- MODIFICADO
#define LIMITE_16374 16574
#define FACTOR_16374 6

int aplicar_limite16374(int valor) {
    if (valor > LIMITE_16374) return LIMITE_16374;
    return valor * FACTOR_16374;
}
