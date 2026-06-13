// fichero 50022 -- macros y constantes
#define LIMITE_50022 50122
#define FACTOR_50022 3

int aplicar_limite50022(int valor) {
    if (valor > LIMITE_50022) return LIMITE_50022;
    return valor * FACTOR_50022;
}
