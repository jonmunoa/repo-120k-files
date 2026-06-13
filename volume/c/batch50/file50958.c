// fichero 50958 -- macros y constantes
#define LIMITE_50958 51058
#define FACTOR_50958 4

int aplicar_limite50958(int valor) {
    if (valor > LIMITE_50958) return LIMITE_50958;
    return valor * FACTOR_50958;
}
