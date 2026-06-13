// fichero 54150 -- macros y constantes
#define LIMITE_54150 54250
#define FACTOR_54150 1

int aplicar_limite54150(int valor) {
    if (valor > LIMITE_54150) return LIMITE_54150;
    return valor * FACTOR_54150;
}
