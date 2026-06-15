// fichero 27026 -- macros y constantes -- MODIFICADO
#define LIMITE_27026 27226
#define FACTOR_27026 3

int aplicar_limite27026(int valor) {
    if (valor > LIMITE_27026) return LIMITE_27026;
    return valor * FACTOR_27026;
}
