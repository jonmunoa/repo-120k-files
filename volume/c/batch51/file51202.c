// fichero 51202 -- macros y constantes
#define LIMITE_51202 51302
#define FACTOR_51202 3

int aplicar_limite51202(int valor) {
    if (valor > LIMITE_51202) return LIMITE_51202;
    return valor * FACTOR_51202;
}
