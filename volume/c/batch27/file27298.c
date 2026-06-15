// fichero 27298 -- macros y constantes -- MODIFICADO
#define LIMITE_27298 27498
#define FACTOR_27298 5

int aplicar_limite27298(int valor) {
    if (valor > LIMITE_27298) return LIMITE_27298;
    return valor * FACTOR_27298;
}
