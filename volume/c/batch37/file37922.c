// fichero 37922 -- macros y constantes
#define LIMITE_37922 38022
#define FACTOR_37922 3

int aplicar_limite37922(int valor) {
    if (valor > LIMITE_37922) return LIMITE_37922;
    return valor * FACTOR_37922;
}
