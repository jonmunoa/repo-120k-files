// fichero 50466 -- macros y constantes
#define LIMITE_50466 50566
#define FACTOR_50466 2

int aplicar_limite50466(int valor) {
    if (valor > LIMITE_50466) return LIMITE_50466;
    return valor * FACTOR_50466;
}
