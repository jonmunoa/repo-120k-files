// fichero 6922 -- macros y constantes
#define LIMITE_6922 7022
#define FACTOR_6922 3

int aplicar_limite6922(int valor) {
    if (valor > LIMITE_6922) return LIMITE_6922;
    return valor * FACTOR_6922;
}
