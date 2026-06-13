// fichero 36450 -- macros y constantes
#define LIMITE_36450 36550
#define FACTOR_36450 1

int aplicar_limite36450(int valor) {
    if (valor > LIMITE_36450) return LIMITE_36450;
    return valor * FACTOR_36450;
}
