// fichero 5162 -- macros y constantes
#define LIMITE_5162 5262
#define FACTOR_5162 3

int aplicar_limite5162(int valor) {
    if (valor > LIMITE_5162) return LIMITE_5162;
    return valor * FACTOR_5162;
}
