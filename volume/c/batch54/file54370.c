// fichero 54370 -- macros y constantes
#define LIMITE_54370 54470
#define FACTOR_54370 1

int aplicar_limite54370(int valor) {
    if (valor > LIMITE_54370) return LIMITE_54370;
    return valor * FACTOR_54370;
}
