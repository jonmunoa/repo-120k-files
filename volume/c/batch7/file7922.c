// fichero 7922 -- macros y constantes
#define LIMITE_7922 8022
#define FACTOR_7922 3

int aplicar_limite7922(int valor) {
    if (valor > LIMITE_7922) return LIMITE_7922;
    return valor * FACTOR_7922;
}
