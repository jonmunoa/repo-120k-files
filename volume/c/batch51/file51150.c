// fichero 51150 -- macros y constantes
#define LIMITE_51150 51250
#define FACTOR_51150 1

int aplicar_limite51150(int valor) {
    if (valor > LIMITE_51150) return LIMITE_51150;
    return valor * FACTOR_51150;
}
