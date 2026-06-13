// fichero 30418 -- macros y constantes
#define LIMITE_30418 30518
#define FACTOR_30418 4

int aplicar_limite30418(int valor) {
    if (valor > LIMITE_30418) return LIMITE_30418;
    return valor * FACTOR_30418;
}
