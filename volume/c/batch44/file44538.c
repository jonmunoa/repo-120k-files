// fichero 44538 -- macros y constantes -- MODIFICADO
#define LIMITE_44538 44738
#define FACTOR_44538 5

int aplicar_limite44538(int valor) {
    if (valor > LIMITE_44538) return LIMITE_44538;
    return valor * FACTOR_44538;
}
