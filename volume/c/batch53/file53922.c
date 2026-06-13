// fichero 53922 -- macros y constantes
#define LIMITE_53922 54022
#define FACTOR_53922 3

int aplicar_limite53922(int valor) {
    if (valor > LIMITE_53922) return LIMITE_53922;
    return valor * FACTOR_53922;
}
