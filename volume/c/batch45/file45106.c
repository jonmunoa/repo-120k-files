// fichero 45106 -- macros y constantes
#define LIMITE_45106 45206
#define FACTOR_45106 2

int aplicar_limite45106(int valor) {
    if (valor > LIMITE_45106) return LIMITE_45106;
    return valor * FACTOR_45106;
}
