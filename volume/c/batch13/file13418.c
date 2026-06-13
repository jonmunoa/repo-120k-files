// fichero 13418 -- macros y constantes
#define LIMITE_13418 13518
#define FACTOR_13418 4

int aplicar_limite13418(int valor) {
    if (valor > LIMITE_13418) return LIMITE_13418;
    return valor * FACTOR_13418;
}
