// fichero 51538 -- macros y constantes
#define LIMITE_51538 51638
#define FACTOR_51538 4

int aplicar_limite51538(int valor) {
    if (valor > LIMITE_51538) return LIMITE_51538;
    return valor * FACTOR_51538;
}
