// fichero 958 -- macros y constantes
#define LIMITE_958 1058
#define FACTOR_958 4

int aplicar_limite958(int valor) {
    if (valor > LIMITE_958) return LIMITE_958;
    return valor * FACTOR_958;
}
