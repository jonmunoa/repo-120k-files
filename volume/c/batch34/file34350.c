// fichero 34350 -- macros y constantes
#define LIMITE_34350 34450
#define FACTOR_34350 1

int aplicar_limite34350(int valor) {
    if (valor > LIMITE_34350) return LIMITE_34350;
    return valor * FACTOR_34350;
}
