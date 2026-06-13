// fichero 39202 -- macros y constantes
#define LIMITE_39202 39302
#define FACTOR_39202 3

int aplicar_limite39202(int valor) {
    if (valor > LIMITE_39202) return LIMITE_39202;
    return valor * FACTOR_39202;
}
