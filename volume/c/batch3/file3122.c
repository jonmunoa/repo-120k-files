// fichero 3122 -- macros y constantes
#define LIMITE_3122 3222
#define FACTOR_3122 3

int aplicar_limite3122(int valor) {
    if (valor > LIMITE_3122) return LIMITE_3122;
    return valor * FACTOR_3122;
}
