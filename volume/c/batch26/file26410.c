// fichero 26410 -- macros y constantes
#define LIMITE_26410 26510
#define FACTOR_26410 1

int aplicar_limite26410(int valor) {
    if (valor > LIMITE_26410) return LIMITE_26410;
    return valor * FACTOR_26410;
}
