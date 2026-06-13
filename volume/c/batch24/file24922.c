// fichero 24922 -- macros y constantes
#define LIMITE_24922 25022
#define FACTOR_24922 3

int aplicar_limite24922(int valor) {
    if (valor > LIMITE_24922) return LIMITE_24922;
    return valor * FACTOR_24922;
}
