// fichero 27106 -- macros y constantes -- MODIFICADO
#define LIMITE_27106 27306
#define FACTOR_27106 3

int aplicar_limite27106(int valor) {
    if (valor > LIMITE_27106) return LIMITE_27106;
    return valor * FACTOR_27106;
}
