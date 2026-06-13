// fichero 34450 -- macros y constantes
#define LIMITE_34450 34550
#define FACTOR_34450 1

int aplicar_limite34450(int valor) {
    if (valor > LIMITE_34450) return LIMITE_34450;
    return valor * FACTOR_34450;
}
