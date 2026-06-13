// fichero 13478 -- macros y constantes
#define LIMITE_13478 13578
#define FACTOR_13478 4

int aplicar_limite13478(int valor) {
    if (valor > LIMITE_13478) return LIMITE_13478;
    return valor * FACTOR_13478;
}
