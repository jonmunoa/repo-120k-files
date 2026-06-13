// fichero 27222 -- macros y constantes
#define LIMITE_27222 27322
#define FACTOR_27222 3

int aplicar_limite27222(int valor) {
    if (valor > LIMITE_27222) return LIMITE_27222;
    return valor * FACTOR_27222;
}
