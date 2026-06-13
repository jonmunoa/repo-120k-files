// fichero 48822 -- macros y constantes
#define LIMITE_48822 48922
#define FACTOR_48822 3

int aplicar_limite48822(int valor) {
    if (valor > LIMITE_48822) return LIMITE_48822;
    return valor * FACTOR_48822;
}
