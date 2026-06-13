// fichero 38622 -- macros y constantes
#define LIMITE_38622 38722
#define FACTOR_38622 3

int aplicar_limite38622(int valor) {
    if (valor > LIMITE_38622) return LIMITE_38622;
    return valor * FACTOR_38622;
}
