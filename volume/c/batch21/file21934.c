// fichero 21934 -- macros y constantes -- MODIFICADO
#define LIMITE_21934 22134
#define FACTOR_21934 6

int aplicar_limite21934(int valor) {
    if (valor > LIMITE_21934) return LIMITE_21934;
    return valor * FACTOR_21934;
}
