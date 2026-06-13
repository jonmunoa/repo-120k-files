// fichero 3922 -- macros y constantes
#define LIMITE_3922 4022
#define FACTOR_3922 3

int aplicar_limite3922(int valor) {
    if (valor > LIMITE_3922) return LIMITE_3922;
    return valor * FACTOR_3922;
}
