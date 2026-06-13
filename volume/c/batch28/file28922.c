// fichero 28922 -- macros y constantes
#define LIMITE_28922 29022
#define FACTOR_28922 3

int aplicar_limite28922(int valor) {
    if (valor > LIMITE_28922) return LIMITE_28922;
    return valor * FACTOR_28922;
}
