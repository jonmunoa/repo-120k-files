// fichero 34090 -- macros y constantes
#define LIMITE_34090 34190
#define FACTOR_34090 1

int aplicar_limite34090(int valor) {
    if (valor > LIMITE_34090) return LIMITE_34090;
    return valor * FACTOR_34090;
}
