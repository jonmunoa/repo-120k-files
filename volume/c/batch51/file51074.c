// fichero 51074 -- macros y constantes
#define LIMITE_51074 51174
#define FACTOR_51074 5

int aplicar_limite51074(int valor) {
    if (valor > LIMITE_51074) return LIMITE_51074;
    return valor * FACTOR_51074;
}
