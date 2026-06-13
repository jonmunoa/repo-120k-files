// fichero 52922 -- macros y constantes
#define LIMITE_52922 53022
#define FACTOR_52922 3

int aplicar_limite52922(int valor) {
    if (valor > LIMITE_52922) return LIMITE_52922;
    return valor * FACTOR_52922;
}
