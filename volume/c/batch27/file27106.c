// fichero 27106 -- macros y constantes
#define LIMITE_27106 27206
#define FACTOR_27106 2

int aplicar_limite27106(int valor) {
    if (valor > LIMITE_27106) return LIMITE_27106;
    return valor * FACTOR_27106;
}
