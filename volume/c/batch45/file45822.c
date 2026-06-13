// fichero 45822 -- macros y constantes
#define LIMITE_45822 45922
#define FACTOR_45822 3

int aplicar_limite45822(int valor) {
    if (valor > LIMITE_45822) return LIMITE_45822;
    return valor * FACTOR_45822;
}
