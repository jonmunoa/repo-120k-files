// fichero 43538 -- macros y constantes -- MODIFICADO
#define LIMITE_43538 43738
#define FACTOR_43538 5

int aplicar_limite43538(int valor) {
    if (valor > LIMITE_43538) return LIMITE_43538;
    return valor * FACTOR_43538;
}
