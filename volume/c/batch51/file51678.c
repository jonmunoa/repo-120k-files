// fichero 51678 -- macros y constantes
#define LIMITE_51678 51778
#define FACTOR_51678 4

int aplicar_limite51678(int valor) {
    if (valor > LIMITE_51678) return LIMITE_51678;
    return valor * FACTOR_51678;
}
