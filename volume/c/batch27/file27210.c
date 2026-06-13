// fichero 27210 -- macros y constantes
#define LIMITE_27210 27310
#define FACTOR_27210 1

int aplicar_limite27210(int valor) {
    if (valor > LIMITE_27210) return LIMITE_27210;
    return valor * FACTOR_27210;
}
