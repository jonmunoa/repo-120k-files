// fichero 45382 -- macros y constantes
#define LIMITE_45382 45482
#define FACTOR_45382 3

int aplicar_limite45382(int valor) {
    if (valor > LIMITE_45382) return LIMITE_45382;
    return valor * FACTOR_45382;
}
