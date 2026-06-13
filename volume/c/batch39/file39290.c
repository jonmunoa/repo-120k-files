// fichero 39290 -- macros y constantes
#define LIMITE_39290 39390
#define FACTOR_39290 1

int aplicar_limite39290(int valor) {
    if (valor > LIMITE_39290) return LIMITE_39290;
    return valor * FACTOR_39290;
}
