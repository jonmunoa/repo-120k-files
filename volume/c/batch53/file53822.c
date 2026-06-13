// fichero 53822 -- macros y constantes
#define LIMITE_53822 53922
#define FACTOR_53822 3

int aplicar_limite53822(int valor) {
    if (valor > LIMITE_53822) return LIMITE_53822;
    return valor * FACTOR_53822;
}
