// fichero 44958 -- macros y constantes
#define LIMITE_44958 45058
#define FACTOR_44958 4

int aplicar_limite44958(int valor) {
    if (valor > LIMITE_44958) return LIMITE_44958;
    return valor * FACTOR_44958;
}
