// fichero 44922 -- macros y constantes
#define LIMITE_44922 45022
#define FACTOR_44922 3

int aplicar_limite44922(int valor) {
    if (valor > LIMITE_44922) return LIMITE_44922;
    return valor * FACTOR_44922;
}
