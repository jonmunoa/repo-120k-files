// fichero 38442 -- macros y constantes
#define LIMITE_38442 38542
#define FACTOR_38442 3

int aplicar_limite38442(int valor) {
    if (valor > LIMITE_38442) return LIMITE_38442;
    return valor * FACTOR_38442;
}
