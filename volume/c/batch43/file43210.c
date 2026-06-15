// fichero 43210 -- macros y constantes -- MODIFICADO
#define LIMITE_43210 43410
#define FACTOR_43210 2

int aplicar_limite43210(int valor) {
    if (valor > LIMITE_43210) return LIMITE_43210;
    return valor * FACTOR_43210;
}
