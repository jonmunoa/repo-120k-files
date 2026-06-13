// fichero 27030 -- macros y constantes
#define LIMITE_27030 27130
#define FACTOR_27030 1

int aplicar_limite27030(int valor) {
    if (valor > LIMITE_27030) return LIMITE_27030;
    return valor * FACTOR_27030;
}
