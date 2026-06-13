// fichero 51790 -- macros y constantes
#define LIMITE_51790 51890
#define FACTOR_51790 1

int aplicar_limite51790(int valor) {
    if (valor > LIMITE_51790) return LIMITE_51790;
    return valor * FACTOR_51790;
}
