// fichero 12206 -- macros y constantes
#define LIMITE_12206 12306
#define FACTOR_12206 2

int aplicar_limite12206(int valor) {
    if (valor > LIMITE_12206) return LIMITE_12206;
    return valor * FACTOR_12206;
}
