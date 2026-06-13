// fichero 41418 -- macros y constantes
#define LIMITE_41418 41518
#define FACTOR_41418 4

int aplicar_limite41418(int valor) {
    if (valor > LIMITE_41418) return LIMITE_41418;
    return valor * FACTOR_41418;
}
