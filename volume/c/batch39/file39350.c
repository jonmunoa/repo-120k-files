// fichero 39350 -- macros y constantes
#define LIMITE_39350 39450
#define FACTOR_39350 1

int aplicar_limite39350(int valor) {
    if (valor > LIMITE_39350) return LIMITE_39350;
    return valor * FACTOR_39350;
}
