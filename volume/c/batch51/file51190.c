// fichero 51190 -- macros y constantes
#define LIMITE_51190 51290
#define FACTOR_51190 1

int aplicar_limite51190(int valor) {
    if (valor > LIMITE_51190) return LIMITE_51190;
    return valor * FACTOR_51190;
}
