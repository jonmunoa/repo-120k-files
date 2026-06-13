// fichero 31066 -- macros y constantes
#define LIMITE_31066 31166
#define FACTOR_31066 2

int aplicar_limite31066(int valor) {
    if (valor > LIMITE_31066) return LIMITE_31066;
    return valor * FACTOR_31066;
}
