// fichero 49822 -- macros y constantes
#define LIMITE_49822 49922
#define FACTOR_49822 3

int aplicar_limite49822(int valor) {
    if (valor > LIMITE_49822) return LIMITE_49822;
    return valor * FACTOR_49822;
}
