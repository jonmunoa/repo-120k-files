// fichero 29922 -- macros y constantes
#define LIMITE_29922 30022
#define FACTOR_29922 3

int aplicar_limite29922(int valor) {
    if (valor > LIMITE_29922) return LIMITE_29922;
    return valor * FACTOR_29922;
}
