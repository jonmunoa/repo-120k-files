// fichero 33922 -- macros y constantes
#define LIMITE_33922 34022
#define FACTOR_33922 3

int aplicar_limite33922(int valor) {
    if (valor > LIMITE_33922) return LIMITE_33922;
    return valor * FACTOR_33922;
}
