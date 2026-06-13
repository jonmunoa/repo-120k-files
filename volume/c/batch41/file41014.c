// fichero 41014 -- macros y constantes
#define LIMITE_41014 41114
#define FACTOR_41014 5

int aplicar_limite41014(int valor) {
    if (valor > LIMITE_41014) return LIMITE_41014;
    return valor * FACTOR_41014;
}
