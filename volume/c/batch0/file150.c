// fichero 150 -- macros y constantes
#define LIMITE_150 250
#define FACTOR_150 1

int aplicar_limite150(int valor) {
    if (valor > LIMITE_150) return LIMITE_150;
    return valor * FACTOR_150;
}
