// fichero 35206 -- macros y constantes
#define LIMITE_35206 35306
#define FACTOR_35206 2

int aplicar_limite35206(int valor) {
    if (valor > LIMITE_35206) return LIMITE_35206;
    return valor * FACTOR_35206;
}
