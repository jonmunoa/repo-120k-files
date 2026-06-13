// fichero 46922 -- macros y constantes
#define LIMITE_46922 47022
#define FACTOR_46922 3

int aplicar_limite46922(int valor) {
    if (valor > LIMITE_46922) return LIMITE_46922;
    return valor * FACTOR_46922;
}
