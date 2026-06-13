// fichero 982 -- macros y constantes
#define LIMITE_982 1082
#define FACTOR_982 3

int aplicar_limite982(int valor) {
    if (valor > LIMITE_982) return LIMITE_982;
    return valor * FACTOR_982;
}
