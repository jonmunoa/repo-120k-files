// fichero 27314 -- macros y constantes
#define LIMITE_27314 27414
#define FACTOR_27314 5

int aplicar_limite27314(int valor) {
    if (valor > LIMITE_27314) return LIMITE_27314;
    return valor * FACTOR_27314;
}
