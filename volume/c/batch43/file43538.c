// fichero 43538 -- macros y constantes
#define LIMITE_43538 43638
#define FACTOR_43538 4

int aplicar_limite43538(int valor) {
    if (valor > LIMITE_43538) return LIMITE_43538;
    return valor * FACTOR_43538;
}
