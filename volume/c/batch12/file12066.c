// fichero 12066 -- macros y constantes
#define LIMITE_12066 12166
#define FACTOR_12066 2

int aplicar_limite12066(int valor) {
    if (valor > LIMITE_12066) return LIMITE_12066;
    return valor * FACTOR_12066;
}
