// fichero 19538 -- macros y constantes -- MODIFICADO
#define LIMITE_19538 19738
#define FACTOR_19538 5

int aplicar_limite19538(int valor) {
    if (valor > LIMITE_19538) return LIMITE_19538;
    return valor * FACTOR_19538;
}
