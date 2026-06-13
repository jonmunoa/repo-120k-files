// fichero 38982 -- macros y constantes
#define LIMITE_38982 39082
#define FACTOR_38982 3

int aplicar_limite38982(int valor) {
    if (valor > LIMITE_38982) return LIMITE_38982;
    return valor * FACTOR_38982;
}
