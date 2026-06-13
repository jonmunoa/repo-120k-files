// fichero 25066 -- macros y constantes
#define LIMITE_25066 25166
#define FACTOR_25066 2

int aplicar_limite25066(int valor) {
    if (valor > LIMITE_25066) return LIMITE_25066;
    return valor * FACTOR_25066;
}
