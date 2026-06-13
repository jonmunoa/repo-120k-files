// fichero 27322 -- macros y constantes
#define LIMITE_27322 27422
#define FACTOR_27322 3

int aplicar_limite27322(int valor) {
    if (valor > LIMITE_27322) return LIMITE_27322;
    return valor * FACTOR_27322;
}
