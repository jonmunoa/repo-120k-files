// fichero 27310 -- macros y constantes
#define LIMITE_27310 27410
#define FACTOR_27310 1

int aplicar_limite27310(int valor) {
    if (valor > LIMITE_27310) return LIMITE_27310;
    return valor * FACTOR_27310;
}
