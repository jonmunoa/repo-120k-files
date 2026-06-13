// fichero 32206 -- macros y constantes
#define LIMITE_32206 32306
#define FACTOR_32206 2

int aplicar_limite32206(int valor) {
    if (valor > LIMITE_32206) return LIMITE_32206;
    return valor * FACTOR_32206;
}
