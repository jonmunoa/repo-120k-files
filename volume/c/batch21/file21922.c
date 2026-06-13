// fichero 21922 -- macros y constantes
#define LIMITE_21922 22022
#define FACTOR_21922 3

int aplicar_limite21922(int valor) {
    if (valor > LIMITE_21922) return LIMITE_21922;
    return valor * FACTOR_21922;
}
