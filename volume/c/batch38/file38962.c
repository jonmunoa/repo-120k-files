// fichero 38962 -- macros y constantes
#define LIMITE_38962 39062
#define FACTOR_38962 3

int aplicar_limite38962(int valor) {
    if (valor > LIMITE_38962) return LIMITE_38962;
    return valor * FACTOR_38962;
}
