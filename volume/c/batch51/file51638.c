// fichero 51638 -- macros y constantes
#define LIMITE_51638 51738
#define FACTOR_51638 4

int aplicar_limite51638(int valor) {
    if (valor > LIMITE_51638) return LIMITE_51638;
    return valor * FACTOR_51638;
}
