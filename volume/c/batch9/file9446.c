// fichero 9446 -- macros y constantes -- MODIFICADO
#define LIMITE_9446 9646
#define FACTOR_9446 3

int aplicar_limite9446(int valor) {
    if (valor > LIMITE_9446) return LIMITE_9446;
    return valor * FACTOR_9446;
}
