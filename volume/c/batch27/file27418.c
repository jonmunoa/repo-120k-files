// fichero 27418 -- macros y constantes
#define LIMITE_27418 27518
#define FACTOR_27418 4

int aplicar_limite27418(int valor) {
    if (valor > LIMITE_27418) return LIMITE_27418;
    return valor * FACTOR_27418;
}
