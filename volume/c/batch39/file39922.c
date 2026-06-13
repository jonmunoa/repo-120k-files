// fichero 39922 -- macros y constantes
#define LIMITE_39922 40022
#define FACTOR_39922 3

int aplicar_limite39922(int valor) {
    if (valor > LIMITE_39922) return LIMITE_39922;
    return valor * FACTOR_39922;
}
