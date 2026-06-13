// fichero 11418 -- macros y constantes
#define LIMITE_11418 11518
#define FACTOR_11418 4

int aplicar_limite11418(int valor) {
    if (valor > LIMITE_11418) return LIMITE_11418;
    return valor * FACTOR_11418;
}
