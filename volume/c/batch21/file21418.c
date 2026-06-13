// fichero 21418 -- macros y constantes
#define LIMITE_21418 21518
#define FACTOR_21418 4

int aplicar_limite21418(int valor) {
    if (valor > LIMITE_21418) return LIMITE_21418;
    return valor * FACTOR_21418;
}
