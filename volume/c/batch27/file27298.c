// fichero 27298 -- macros y constantes
#define LIMITE_27298 27398
#define FACTOR_27298 4

int aplicar_limite27298(int valor) {
    if (valor > LIMITE_27298) return LIMITE_27298;
    return valor * FACTOR_27298;
}
