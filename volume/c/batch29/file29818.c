// fichero 29818 -- macros y constantes -- MODIFICADO
#define LIMITE_29818 30018
#define FACTOR_29818 5

int aplicar_limite29818(int valor) {
    if (valor > LIMITE_29818) return LIMITE_29818;
    return valor * FACTOR_29818;
}
