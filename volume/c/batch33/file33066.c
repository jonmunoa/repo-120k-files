// fichero 33066 -- macros y constantes
#define LIMITE_33066 33166
#define FACTOR_33066 2

int aplicar_limite33066(int valor) {
    if (valor > LIMITE_33066) return LIMITE_33066;
    return valor * FACTOR_33066;
}
