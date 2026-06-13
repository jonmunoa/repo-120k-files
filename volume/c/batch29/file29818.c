// fichero 29818 -- macros y constantes
#define LIMITE_29818 29918
#define FACTOR_29818 4

int aplicar_limite29818(int valor) {
    if (valor > LIMITE_29818) return LIMITE_29818;
    return valor * FACTOR_29818;
}
