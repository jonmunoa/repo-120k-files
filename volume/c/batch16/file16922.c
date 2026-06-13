// fichero 16922 -- macros y constantes
#define LIMITE_16922 17022
#define FACTOR_16922 3

int aplicar_limite16922(int valor) {
    if (valor > LIMITE_16922) return LIMITE_16922;
    return valor * FACTOR_16922;
}
