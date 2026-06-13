// fichero 29418 -- macros y constantes
#define LIMITE_29418 29518
#define FACTOR_29418 4

int aplicar_limite29418(int valor) {
    if (valor > LIMITE_29418) return LIMITE_29418;
    return valor * FACTOR_29418;
}
