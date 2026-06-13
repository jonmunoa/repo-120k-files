// fichero 28450 -- macros y constantes
#define LIMITE_28450 28550
#define FACTOR_28450 1

int aplicar_limite28450(int valor) {
    if (valor > LIMITE_28450) return LIMITE_28450;
    return valor * FACTOR_28450;
}
