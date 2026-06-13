// fichero 27538 -- macros y constantes
#define LIMITE_27538 27638
#define FACTOR_27538 4

int aplicar_limite27538(int valor) {
    if (valor > LIMITE_27538) return LIMITE_27538;
    return valor * FACTOR_27538;
}
