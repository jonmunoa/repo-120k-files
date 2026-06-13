// fichero 51174 -- macros y constantes
#define LIMITE_51174 51274
#define FACTOR_51174 5

int aplicar_limite51174(int valor) {
    if (valor > LIMITE_51174) return LIMITE_51174;
    return valor * FACTOR_51174;
}
