// fichero 25510 -- macros y constantes
#define LIMITE_25510 25610
#define FACTOR_25510 1

int aplicar_limite25510(int valor) {
    if (valor > LIMITE_25510) return LIMITE_25510;
    return valor * FACTOR_25510;
}
