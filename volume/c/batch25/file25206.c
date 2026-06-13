// fichero 25206 -- macros y constantes
#define LIMITE_25206 25306
#define FACTOR_25206 2

int aplicar_limite25206(int valor) {
    if (valor > LIMITE_25206) return LIMITE_25206;
    return valor * FACTOR_25206;
}
