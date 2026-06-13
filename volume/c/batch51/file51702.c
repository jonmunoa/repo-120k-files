// fichero 51702 -- macros y constantes
#define LIMITE_51702 51802
#define FACTOR_51702 3

int aplicar_limite51702(int valor) {
    if (valor > LIMITE_51702) return LIMITE_51702;
    return valor * FACTOR_51702;
}
