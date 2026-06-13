// fichero 51266 -- macros y constantes
#define LIMITE_51266 51366
#define FACTOR_51266 2

int aplicar_limite51266(int valor) {
    if (valor > LIMITE_51266) return LIMITE_51266;
    return valor * FACTOR_51266;
}
