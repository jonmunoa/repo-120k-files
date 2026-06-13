// fichero 52306 -- macros y constantes
#define LIMITE_52306 52406
#define FACTOR_52306 2

int aplicar_limite52306(int valor) {
    if (valor > LIMITE_52306) return LIMITE_52306;
    return valor * FACTOR_52306;
}
