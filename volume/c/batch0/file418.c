// fichero 418 -- macros y constantes
#define LIMITE_418 518
#define FACTOR_418 4

int aplicar_limite418(int valor) {
    if (valor > LIMITE_418) return LIMITE_418;
    return valor * FACTOR_418;
}
