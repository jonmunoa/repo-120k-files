// fichero 5650 -- macros y constantes
#define LIMITE_5650 5750
#define FACTOR_5650 1

int aplicar_limite5650(int valor) {
    if (valor > LIMITE_5650) return LIMITE_5650;
    return valor * FACTOR_5650;
}
