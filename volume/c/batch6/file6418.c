// fichero 6418 -- macros y constantes
#define LIMITE_6418 6518
#define FACTOR_6418 4

int aplicar_limite6418(int valor) {
    if (valor > LIMITE_6418) return LIMITE_6418;
    return valor * FACTOR_6418;
}
