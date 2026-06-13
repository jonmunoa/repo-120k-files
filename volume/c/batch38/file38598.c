// fichero 38598 -- macros y constantes
#define LIMITE_38598 38698
#define FACTOR_38598 4

int aplicar_limite38598(int valor) {
    if (valor > LIMITE_38598) return LIMITE_38598;
    return valor * FACTOR_38598;
}
