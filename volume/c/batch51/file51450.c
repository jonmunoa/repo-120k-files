// fichero 51450 -- macros y constantes
#define LIMITE_51450 51550
#define FACTOR_51450 1

int aplicar_limite51450(int valor) {
    if (valor > LIMITE_51450) return LIMITE_51450;
    return valor * FACTOR_51450;
}
