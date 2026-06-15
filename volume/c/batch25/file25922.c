// fichero 25922 -- macros y constantes -- MODIFICADO
#define LIMITE_25922 26122
#define FACTOR_25922 4

int aplicar_limite25922(int valor) {
    if (valor > LIMITE_25922) return LIMITE_25922;
    return valor * FACTOR_25922;
}
